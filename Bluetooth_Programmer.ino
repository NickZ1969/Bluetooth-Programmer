

void setup() {

  Serial.begin(38400);
  delay(20);
  Serial.print("AT+PSWD=");
  Serial.write(34);
  Serial.print("2468");
  Serial.write(34);
  Serial.write(13);
  Serial.write(10);
  delay(20);
  Serial.println("AT+NAME=Speeduino");
  delay(20);
  Serial.println("AT+UART:115200,0,0");
  delay(20);
  Serial.println("AT+RESET");


}

void loop() {
 


}
