void setup(){
  Serial.begin(115200);
  while(!Serial); // Wait for Serial to be ready
  delay(1000);
}

void loop(){
  Serial.println("Hello World");
  delay(1000);
}
