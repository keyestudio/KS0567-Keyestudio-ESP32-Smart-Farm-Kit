#include <LiquidCrystal_I2C.h>
#include <dht11.h>

#define DHT11PIN 17
#define MotorPin1 19//(IN+)
#define MotorPin2 18//(IN-)

dht11 DHT11;

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();
  lcd.backlight();  

  pinMode(MotorPin1,OUTPUT);
  pinMode(MotorPin2,OUTPUT);

  //Set PWM output to adjust the speed of motor
  ledcSetup(1, 1200, 8);//Set frequency of LEDC Channel 1 to 1200, PWM resolution to 8, so duty cycle = 256
  ledcAttachPin(MotorPin1, 1);  //Bound LEDC Channel 1 to the specified left motor pin gpio19 to output.
  ledcSetup(3, 1200, 8);//Set frequency of LEDC Channel 3 to 1200, PWM resolution to 8, so duty cycle = 256
  ledcAttachPin(MotorPin2, 3);  //Bound LEDC Channel 3 to the specified left motor pin gpio18 to output.
}

void loop() {
  //Difine temperature and humidity value
  int Temperature;
  int Humidity;
  //Read the value
  int chk = DHT11.read(DHT11PIN);

  Temperature = DHT11.temperature;
  Humidity = DHT11.humidity;
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.setCursor(5, 0);
  lcd.print(Temperature); 

  lcd.setCursor(0, 1);
  lcd.print("Hum:");
  lcd.setCursor(5, 1);
  lcd.print(Humidity);
  delay(500);
  
  if (Temperature >= 25) {
    //Turn left
    ledcWrite(1, 100);
    ledcWrite(3, 0);
  }else{
    //Stop
    delay(3000);
    ledcWrite(1, 0);
    ledcWrite(3, 0);
    delay(200);
  }
}