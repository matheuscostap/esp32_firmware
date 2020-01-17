void setup() {
  Serial.begin(115200);
  Serial.println("Novo Firmware!");
  pinMode(2,OUTPUT);
}

void loop() {
  delay(500);
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
}
