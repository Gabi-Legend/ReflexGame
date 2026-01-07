int LED = 2;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  delay(1000);
  int wait = random(200, 5000);
  digitalWrite(LED, HIGH);
  delay(2000);
  digitalWrite(LED, LOW);
  delay(2000);
}
