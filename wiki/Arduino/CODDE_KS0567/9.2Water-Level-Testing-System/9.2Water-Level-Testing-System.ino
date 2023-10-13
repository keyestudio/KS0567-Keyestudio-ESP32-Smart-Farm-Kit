#include <LiquidCrystal_I2C.h>

#define BuzzerPin 16
#define WaterLevelPin 33

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {

  //Initialize the serial port
  Serial.begin(9600);
  //Set the water level pin to input mode
  pinMode(WaterLevelPin,INPUT);

  //Initialize LCD
  lcd.init();
  //turn on the LCD backlight
  lcd.backlight();
  //clear displays on LCD
  lcd.clear();
}

void loop() {
  //Read the value of water level sensor
  int ReadValue = analogRead(WaterLevelPin);
  //Set the display position of cursor
  lcd.setCursor(0, 0);
  //Set the display position of characters
  lcd.print("WaterLevel:");
  lcd.setCursor(6, 1);
  lcd.print(ReadValue);
  
  //When the detected value exceeds the threshold, the buzzer starts to alarm
  if(ReadValue >= 2000)
  {
    tone(BuzzerPin,659);
    delay(100);
    tone(BuzzerPin,532);
    delay(100);
    tone(BuzzerPin,659);
    delay(100);
    noTone(BuzzerPin);  //Stop alarming
  }
  delay(500);
  lcd.clear();
}