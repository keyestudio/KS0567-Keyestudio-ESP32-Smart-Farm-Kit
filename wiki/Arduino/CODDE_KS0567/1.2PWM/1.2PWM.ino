#include <analogWrite.h>  //Import PWM output library
#define led 27            //Define LED pin

void setup(){
  pinMode(led, OUTPUT);     //Set pin to output mode
}

void loop(){
  for(int i=0; i<255; i++)  //for loop statement. Constantly increase variable i till 255, exit the loop
  {
    analogWrite(led, i);    //PWM output, used to control the brightness of LED
    delay(3);
  }
  for(int i=255; i>0; i--)  //for loop statement. Constantly decrease variable i till 0, exit the loop
  {
    analogWrite(led, i);
    delay(3);
  }
}