const int buzzerPin = 16;   //Set buzzer pin to 16
void setup() {
  pinMode(buzzerPin,OUTPUT);
}
void loop() {
//tone(buzzerPin,294,250,0);  //4 parameters are: pin, frequency, delay, path
    tone(buzzerPin,532);           //duo --C2
    delay(100);
    tone(buzzerPin,587);           //re --D3
    delay(100);
    tone(buzzerPin,659);           //mi --E3
    delay(100);
   //Alarm
   for(int i = 200; i<=1000; i+=10){ 
    tone(buzzerPin,i);
    delay(10);
   }
    //Alarm
   for(int i = 1000; i>=200; i-=10){ 
    tone(buzzerPin,i);
    delay(10);
   }
noTone(buzzerPin);
}