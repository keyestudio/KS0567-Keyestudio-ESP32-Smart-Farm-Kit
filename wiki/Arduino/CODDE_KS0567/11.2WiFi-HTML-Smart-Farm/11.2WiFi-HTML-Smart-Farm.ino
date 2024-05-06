#include <Arduino.h>
/* Determine which development board it is (ESP32 or 8266). 
The library files of these two boards are separated, so the corresponding library should be imported to avoid compiling error.*/
#ifdef ESP32
  #include <WiFi.h>
  #include <AsyncTCP.h>
#elif defined(ESP8266)
  #include <ESP8266WiFi.h>
  #include <ESPAsyncTCP.h>
#endif
/* Import library */
#include <ESPAsyncWebServer.h>
#include <LiquidCrystal_I2C.h>
#include <dht11.h>
#include <analogWrite.h>
#include <ESP32_Servo.h>

#define DHT11PIN        17  //Temperature and humiddity sensor pin
#define LEDPIN          27  //LED pin
#define SERVOPIN        26  //Servo pin
#define FANPIN1         19  //Fan IN+ pin
#define FANPIN2         18  //Fan IN- pin
#define STEAMPIN        35  //Steam sensor pin
#define LIGHTPIN        34  //Photoresistor pin
#define SOILHUMIDITYPIN 32  //Soil humidity sensor pin
#define WATERLEVELPIN   33  //Water level sensor pin
#define RELAYPIN        25  //Relay pin

dht11 DHT11;
//Initialize LCD1602, 0x27 is I2C address
LiquidCrystal_I2C lcd(0x27,16,2);

const char *SSID = "your_SSID";
const char *PASS = "your_PASSWORD";

static int A = 0;
static int B = 0;
static int C = 0;

// Create WebServer object, port number is 80. Directly input IP to access while using port 80; Input "IP:Port number" to access while using other ports.
AsyncWebServer server(80);
Servo myservo;  // create servo object to control a servo
                // 16 servo objects can be created on the ESP32

// An array to store the web page
const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html>
<title>TEST HTML ESP32</title>
<head>
  <meta charset="utf-8">
</head>
<body>
  <div class="btn">
    <div id="dht"></div>
    <button id="btn-led" onclick="setLED()">LED</button>
    <button id="btn-fan" onclick="setFan()">Fan</button>
    <button id="btn-feeding" onclick="setFeeding()">Feeding</button>
    <button id="btn-watering" onclick="setWatering()">Watering</button>
  </div>
</body>
<script>
    // Run the JS function when button is pressed
    function setLED() {
      var payload = "A"; // Content to be sent
      // To "/set" via "get" request
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/set?value=" + payload, true);
      xhr.send();
    }
    function setFan() {
      var payload = "B"; // Content to be sent
      // To "/set" via "get" request
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/set?value=" + payload, true);
      xhr.send();
    }
    function setFeeding() {
      var payload = "C"; // Content to be sent
      // To "/set" via "get" request
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/set?value=" + payload, true);
      xhr.send();
    }
    function setWatering() {
      var payload = "D"; // Content to be sent
      // To "/set" via "get" request
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/set?value=" + payload, true);
      xhr.send();
    }
    // Set a scheduled task to be executed once every 1000ms
    setInterval(function () {
      var xhttp = new XMLHttpRequest();
      xhttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
          // This code searches for the component with ID "dht" and replaces the component content with the returned content
          document.getElementById("dht").innerHTML = this.responseText;
        }
      };
      // Request "/dht" via "GET"
      xhttp.open("GET", "/dht", true);
      xhttp.send();
    }, 1000)
</script>
<style>
  /*Web page*/
  html,body{margin: 0;width: 100%;height: 100%;}
  body{display: flex;justify-content: center;align-items: center;}
  #dht{text-align: center;width: 100%;height: 100%;color: #fff;background-color: #47a047;font-size: 48px;}
  .btn button{width: 100%;height: 100%;border: none;font-size: 30px;color: #fff;position: relative;}
  button{color: #ffff;background-color: #89e689;margin-top: 20px;}
  .btn button:active{top: 2px;}
</style>
</html>
)rawliteral";

//Acquire values and package it in HTML format
String Merge_Data(void)
{
  //Define variables as detected values
  String dataBuffer;
  String Humidity;
  String Temperature;
  String Steam;
  String Light;
  String SoilHumidity;
  String WaterLevel;
  //Acquire values
  int chk = DHT11.read(DHT11PIN);
  //Steam sensor
  Steam = String(analogRead(STEAMPIN) / 4095.0 * 100);
  //Photoresistor
  Light = String(analogRead(LIGHTPIN));
  //Soil humidity sensor
  int shvalue = analogRead(SOILHUMIDITYPIN) / 4095.0 * 100 * 2.3;
  shvalue = shvalue > 100 ? 100 : shvalue;
  SoilHumidity = String(shvalue);
  //Water level sensor
  int wlvalue = analogRead(WATERLEVELPIN) / 4095.0 * 100 * 2.5;
  wlvalue = wlvalue > 100 ? 100 : wlvalue;
  WaterLevel = String(wlvalue);
  //Temperature
  Temperature = String(DHT11.temperature);
  //Humidity
  Humidity = String(DHT11.humidity);
  
  // Package the data into an HTML, display code
  dataBuffer += "<p>";
  dataBuffer += "<h1>Sensor Data</h1>";
  dataBuffer += "<b>Temperature:</b><b>";
  dataBuffer += Temperature;
  dataBuffer += "</b><b>℃</b><br/>";
  dataBuffer += "<b>Humidity:</b><b>";
  dataBuffer += Humidity;
  dataBuffer += "</b><b>%rh</b><br/>";
  dataBuffer += "<b>WaterLevel:</b><b>";
  dataBuffer += WaterLevel;
  dataBuffer += "</b><b>%</b><br/>";
  dataBuffer += "<b>Steam:</b><b>";
  dataBuffer += Steam;
  dataBuffer += "</b><b>%</b><br/>";
  dataBuffer += "<b>Light:</b><b>";
  dataBuffer += Light;
  dataBuffer += "</b><b></b><br/>";
  dataBuffer += "<b>SoilHumidity:</b><b>";
  dataBuffer += SoilHumidity;
  dataBuffer += "</b><b>%</b><br/>";
  dataBuffer += "</p>";

  //  Return the array of data
  return dataBuffer;
}

// Diliver and process Callback function
void Config_Callback(AsyncWebServerRequest *request)
{
  if (request->hasParam("value")) // If there is a value to be delivered
  {
    // Acquire the delivered value
    String HTTP_Payload = request->getParam("value")->value();
    // Print the debug informations    
    Serial.printf("[%lu]%s\r\n", millis(), HTTP_Payload.c_str());

    //LED
    if(HTTP_Payload == "A"){
      if(A){
        digitalWrite(LEDPIN,LOW);
        A = 0;
      }
      else{
        digitalWrite(LEDPIN,HIGH);
        A = 1;
      }
    }
    //FAN
    if(HTTP_Payload == "B"){
      if(B){
        //Stop
        digitalWrite(FANPIN1, LOW);
        digitalWrite(FANPIN2, LOW);
        B = 0;
      }
      else{
        delay(500);
        digitalWrite(FANPIN1, HIGH);
        digitalWrite(FANPIN2, LOW);
        delay(500);
        B = 1;
      }
    }
    //FEEDING
    if(HTTP_Payload == "C"){
      if(C){
        //Servo rotates to 80°, open the feeding box.
        myservo.write(80);
        delay(500);
        C = 0;
      }
      else{
        C = 1;
        //Servo rotates to 180°, close the feeding box.
        myservo.write(180);
        delay(500);
      }
    }
    //WATERING
    if(HTTP_Payload == "D"){
      digitalWrite(RELAYPIN,HIGH);
      delay(400);//Irrigation delay
      digitalWrite(RELAYPIN,LOW);
      delay(650);
    }
  }
  request->send(200, "text/plain", "OK"); // Indicate the successful receiving of the sent data
}

//Set access to invalid URL
void notFound(AsyncWebServerRequest *request) {
    request->send(404, "text/plain", "Not found");
}
  
void setup()
{
  Serial.begin(9600);
  // Connect to hotspot, display IP address on LCD
  WiFi.begin(SSID, PASS);
  while (!WiFi.isConnected())
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected.");
  Serial.println("IP address: "); 
  Serial.println(WiFi.localIP());

  
  //Set pins modes 
  pinMode(LEDPIN,OUTPUT);
  pinMode(STEAMPIN,INPUT);
  pinMode(LIGHTPIN,INPUT);
  pinMode(SOILHUMIDITYPIN,INPUT);
  pinMode(WATERLEVELPIN,INPUT);
  pinMode(RELAYPIN,OUTPUT);
  pinMode(FANPIN1,OUTPUT);
  pinMode(FANPIN2,OUTPUT);

  delay(1000);

  // attaches the servo on pin 26 to the servo object
  myservo.attach(SERVOPIN);   

  //Initialize LCD
  lcd.init();
  // Turn the (optional) backlight off/on
  lcd.backlight();
  //lcd.noBacklight();
  //Clear display
  lcd.clear();
  
  
  //Set the position of Cursor
  lcd.setCursor(0, 0);
  //Display characters
  lcd.print("IP:");
  lcd.setCursor(0, 1);
  lcd.print(WiFi.localIP());
  
  // Add HTTP homepage. When access, push web pages to the visitor
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
            { request->send(200, "text/html", index_html); });

  // Set a response. When requesting the Ip/dht link on HTML, return the packaged sensor data
  server.on("/dht", HTTP_GET, [](AsyncWebServerRequest *request)
            { request->send(200, "text/plain", Merge_Data().c_str()); });

  // Bind the function delivered by the configuration
  server.on("/set", HTTP_GET, Config_Callback);   
  // Bind the invalid address of the access
  server.onNotFound(notFound);
  // Initialize HTTP server
  server.begin();  
}
void loop(){

}