#include <ESP32_Servo.h>  //Import the library of servo on ESP32 board
Servo myservo;  // create servo object to control a servo
                // 16 servo objects can be created on the ESP32

#define TrigPin 12 //connect trig to D12
#define EchoPin 13 //connect echo to D13
#define ServoPin 26
int duration,distance;

void setup(){

  Serial.begin(9600); //Set the baud rate to 9600
  pinMode(TrigPin,OUTPUT);  //set trig pin to output mode
  pinMode(EchoPin,INPUT);   //Set echo pin to input mode
  myservo.attach(ServoPin);   // attaches the servo on pin 26 to the servo object
}
void loop(){
  Serial.println(getDistance());
  //When the distance is detected within 2~7cm, open the feeding box. Or else, close. 
  if (getDistance() >= 2 && 7 >= getDistance()) {
    //Servo rotates to 80° to open the box
    myservo.write(80);
    delay(500);
  }
  else{
    myservo.write(180);
    delay(500);
  }
}

//Put the gotten distance in a function
float getDistance() {

  digitalWrite(TrigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(10);	//Trigger the trig pin via a high level lasting at least 10us
  digitalWrite(TrigPin,LOW);
  duration = pulseIn(EchoPin,HIGH);	//the time of high level at echo pin
  distance = duration/58;		//convert into distance(cm)
  delay(50);
  
  return distance;
}