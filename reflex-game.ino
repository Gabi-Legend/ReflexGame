int LED = 2;
int BUTTON = 3;
int BUZZER = A5;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
  tone(BUZZER, 1000, 2000);
  Serial.begin(9600);
}

void loop() {
  int wait = random(300, 5000);
  delay(wait);           
  digitalWrite(LED, HIGH);
  tone(BUZZER, 440);
  unsigned long start_time = millis();   //time when the game started
  while (digitalRead(BUTTON) == HIGH) {  //waiting for the player to press the button
  }
  unsigned long reaction_time = millis() - start_time; //reaction time
  Serial.println(reaction_time);
  digitalWrite(LED, LOW);
  noTone(BUZZER);
  delay(1000);
}
