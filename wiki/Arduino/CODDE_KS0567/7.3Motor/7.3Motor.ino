#define MotorPin1 19//(IN+)
#define MotorPin2 18//(IN-)

void setup() {
  pinMode(MotorPin1,OUTPUT);
  pinMode(MotorPin2,OUTPUT);

  //Set PWM output to adjust the speed of motor
  ledcSetup(1, 1200, 8);//Set frequency of LEDC Channel 1 to 1200, PWM resolution to 8, so duty cycle = 256
  ledcAttachPin(MotorPin1, 1);  //Bound LEDC Channel 1 to the specified left motor pin gpio19 to output.
  ledcSetup(3, 1200, 8);//Set frequency of LEDC Channel 3 to 1200, PWM resolution to 8, so duty cycle = 256
  ledcAttachPin(MotorPin2, 3);  //Bound LEDC Channel 3 to the specified left motor pin gpio18 to output.
}

void loop() {
  //Turn left
  ledcWrite(1, 70);
  ledcWrite(3, 0);

  delay(2000);

  //Stop
  //WHY STOP: Prevent an excessive current at the moment of reversal. Otherwise, a forced reset may occur due to insufficient power supply on the development board.
  delay(200);
  ledcWrite(1, 0);
  ledcWrite(3, 0);
  delay(200);
  
  //Turn right
  ledcWrite(1, 0);
  ledcWrite(3, 70);

  delay(2000);
  
  //Stop
  delay(200);
  ledcWrite(1, 0);
  ledcWrite(3, 0);
  delay(200);
  
}