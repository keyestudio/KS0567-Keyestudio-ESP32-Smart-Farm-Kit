#include "ESP32_Servo.h"
Servo myservo;  // create servo object to control a servo
                // 16 servo objects can be created on the ESP32

int pos = 0;    // variable to store the servo position
// Recommended PWM GPIO pins on the ESP32 include 2,4,12-19,21-23,25-27,32-33 
int servoPin = 26;

void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin);   // attaches the servo on pin 26 to the servo object
  myservo.write(180);
  delay(2000);
}

void loop() {

}