#define ButtonPin 5   //Define a button pin
#define LED       27  //Define LED pin
int value = 0;        //Define a value to detect button status

void setup() {
  //initialize serial port and set baud rate to 9600
  Serial.begin(9600);
  //Set pin to input mode
  pinMode(ButtonPin,INPUT);
  //Set pin to output mode
  pinMode(LED,OUTPUT);
}

void loop() {
  //Define a value as the read button value
  int ReadValue = digitalRead(ButtonPin); 
  //Detect whether the button is pressed
  if (ReadValue == 0) {
    //Eliminate the button shake
    delay(10);  
    if (ReadValue == 0) {
      value = !value;
      //Detect the button status, press once to light up LED, press again to turn off LED, in a loop
      if(value) {
        digitalWrite(LED,HIGH);
      }else{
        digitalWrite(LED,LOW);
      }
    }
    //Detect the button status again
    //Pressed: execute the loop; Released: exit the loop to next step
    while (digitalRead(ButtonPin) == 0); 
  }
}