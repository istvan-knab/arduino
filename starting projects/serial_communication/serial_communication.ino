void setup() {
  // initialize Serial communication
  Serial.begin(9600);
  Serial.println("Hello Arduino");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("In the loop");
  delay(1000);
}
