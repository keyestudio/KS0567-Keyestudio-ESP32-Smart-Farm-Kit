#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "realme X";
const char* password = "12345678";

WebServer server(80); //Set the server port to 80. Enter the website by IP address rather than the port number.

//Initialize the website
void handleRoot() {
  //Used to send HTTP to the client-side for response, sending 200 means success.
  server.send(200, "text/html", "<h1>Hello, World!</h1>");
}

void setup() {
  Serial.begin(9600);
  //Initialize wifi
  WiFi.begin(ssid, password);
  //Scan for wifi. If connection fails, stay in connecting, and execute "while" loop
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  //Connected. Print the IP address
  Serial.println("Connected to WiFi");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  //Start server
  server.begin();
  Serial.println("Web server started");
}

void loop() {
  server.handleClient();
}
