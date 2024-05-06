void setup() {
  Serial.begin(9600);  // 初始化串口通信 
}
  
void loop() {
  int sensorReading = analogRead(A0);// 从A0口读模拟传感器的值 
  Serial.println(sensorReading);//串口输出独到的传感器的值 
  
  int thisPitch = map(sensorReading, 400, 1000, 120, 1500);
//输入的模拟值范围以一比例转换到适合值 (此为400—1000）
// 音律范围为 (120 - 1500Hz) 
  tone(9, thisPitch, 10);// 播放音频  接arduino9号端口，thispitch为播放频率，10为维持时间
  delay(1); 
}
