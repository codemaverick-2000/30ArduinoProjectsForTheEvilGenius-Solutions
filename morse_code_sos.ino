void dash() {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(500);
  }
  void dot() {
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
  }
void setup() {
  pinMode (8, OUTPUT);
  }

void loop() {
  dot();
  dot();
  dot();
  dash();
  dash();
  dash();
  dot();
  dot();
  dot();
  delay(1500);
}
