int LED = 2;
int BUTTON = 3;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int wait = random(300, 5000);
  delay(wait);           

  digitalWrite(LED, HIGH);
  unsigned long start_time = millis();
  while (digitalRead(BUTTON) == HIGH) {
  }

  unsigned long reaction_time = millis() - start_time;
  Serial.println(reaction_time);

  digitalWrite(LED, LOW);   
  delay(1000);             
}
