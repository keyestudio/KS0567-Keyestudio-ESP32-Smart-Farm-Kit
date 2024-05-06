#include <LiquidCrystal_I2C.h>

#define BuzzerPin 16
#define SoilHumidityPin 32
#define WaterLevelPin 33
#define RelayPin 25
#define ButtonPin 5 //Define a button pin
int value = 0;      //Set an initial button value

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  //Set the pins mode
  pinMode(BuzzerPin,OUTPUT);
  pinMode(SoilHumidityPin,INPUT);
  pinMode(WaterLevelPin,INPUT);
  pinMode(RelayPin,OUTPUT);
  pinMode(ButtonPin,INPUT);

  //Initialize LCD
  lcd.init();
  //Turn on LCD backlight
  lcd.backlight();
  //Clear LCD displays
  lcd.clear();
}

void loop() {
  //define variables as the read values of water level, humidity and button state
  int shvalue = analogRead(SoilHumidityPin);
  int wlvalue = analogRead(WaterLevelPin);
  int ReadValue = digitalRead(ButtonPin); 

  //Set the display position of cursor
  lcd.setCursor(0, 0);
  //Set the display position of character strings
  lcd.print("SoilHum:");
  lcd.setCursor(9, 0);
  lcd.print(shvalue);
  lcd.setCursor(0, 1);
  lcd.print("WaterLevel:");
  lcd.setCursor(11, 1);
  lcd.print(wlvalue);

  //Determine whether the button is pressed 
  if (ReadValue == 0) {
    //Eliminate the button shake
    delay(10);  
    if (ReadValue == 0) {
      value = !value;
      Serial.print("The current status of the button is : ");
      Serial.println(value);
    }
    //Again, determine whether the button is still pressed
    //Pressed: execute the loop; Released: exit the loop to next execution
    while (digitalRead(ButtonPin) == 0); 
  }
  //When the detected humidity is lower than the set threshold, the buzzer starts to alarm. Press button to stop alarming. 
  if(500 >= shvalue && value == 0)
  {
    tone(BuzzerPin,532);
    delay(100);
    tone(BuzzerPin,532);
    delay(100);
    tone(BuzzerPin,659);
    delay(100);
    noTone(BuzzerPin);  //Stop alarming
  }
  //When the detected water level is lower than the set threshold, the buzzer starts to alarm. Press button to stop alarming. 
  if(500 >= wlvalue && value == 0)
  {
    tone(BuzzerPin,411);
    delay(100);
    tone(BuzzerPin,639);
    delay(100);
    tone(BuzzerPin,411);
    delay(100);
    noTone(BuzzerPin);  //Stop alarming
  }
  //When the detected humidity is lower than the set threshold, and the water is sufficient in the pool, irrigation starts automatically. 
  if(500 >= shvalue && wlvalue >= 1000) {
    digitalWrite(RelayPin,HIGH);
    delay(400);//Irrigation delay. 
    digitalWrite(RelayPin,LOW);
    delay(700);
  }
  delay(500);
  //Clear displays
  lcd.clear();
}