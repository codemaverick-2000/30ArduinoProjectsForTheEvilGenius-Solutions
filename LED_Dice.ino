int dotpin = 7;
int onepin = 8;
int twopin = 9;
int threepin = 10;
int fourpin = 11;
int fivepin = 12;
int sixpin = 13;
int buttonpin = 2;
int roll;
int buttonState;
int buttonStaate;
int pin = 7;
int time = 120;

void setup() {
  pinMode(dotpin, OUTPUT);
  pinMode(onepin, OUTPUT);
  pinMode(twopin, OUTPUT);
  pinMode(threepin, OUTPUT);
  pinMode(fourpin, OUTPUT);
  pinMode(fivepin, OUTPUT);
  pinMode(sixpin, OUTPUT);
  pinMode(buttonpin, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}
void flash(int p, int q, int r, int s, int x, int u) {
  digitalWrite(p, HIGH);
  digitalWrite(q, HIGH);
  digitalWrite(r, HIGH);
  digitalWrite(s, HIGH);
  digitalWrite(x, HIGH);
  digitalWrite(u, HIGH);
  delay(200);
  digitalWrite(p, LOW);
  digitalWrite(q, LOW);
  digitalWrite(r, LOW);
  digitalWrite(s, LOW);
  digitalWrite(x, LOW);
  digitalWrite(u, LOW);
  delay(200);
}
void one() {
  flash(10, 5, 5, 5, 5, 5);
  flash(10, 5, 5, 5, 5, 5);
  flash(10, 5, 5, 5, 5, 5);
}
void two() {
  flash(7, 13, 5, 5, 5, 5);
  flash(7, 13, 5, 5, 5, 5);
  flash(7, 13, 5, 5, 5, 5);
}
void three() {
  flash(7, 10, 13, 5, 5, 5);
  flash(7, 10, 13, 5, 5, 5);
  flash(7, 10, 13, 5, 5, 5);
}
void four() {
  flash(7, 9, 11, 13, 5, 5);
  flash(7, 9, 11, 13, 5, 5);
  flash(7, 9, 11, 13, 5, 5);
}
void five() {
  flash(7, 9, 11, 13, 10, 5);
  flash(7, 9, 11, 13, 10, 5);
  flash(7, 9, 11, 13, 10, 5);
}
void six() {
  flash(7, 8, 9, 11, 12, 13);
  flash(7, 8, 9, 11, 12, 13);
  flash(7, 8, 9, 11, 12, 13);
}
void loop() {
  time = 120;
  pin = 7;
  buttonState = digitalRead(buttonpin);
  while (digitalRead(buttonpin) == buttonState) {
  }
  buttonStaate = digitalRead(buttonpin);
  if (buttonState == HIGH && buttonStaate == LOW) {
    int roll = random(1, 7);
    Serial.println(roll);
    while (pin < 14) {
      digitalWrite(pin, HIGH);
      delay(80);
      digitalWrite(pin - 1, LOW);
      delay(time);
      pin++;
      time = time + 20;
    }
    pin = pin - 2;
    delay(300);
    while (pin > 6) {
      digitalWrite(pin, HIGH);
      delay(100);
      digitalWrite(pin + 1, LOW);
      delay(time);
      time = time + 100;
      pin--;
    }
    digitalWrite(7, LOW);
    delay(500);
    if (roll == 1) {
      one();
    } else if (roll == 2) {
      two();
    } else if (roll == 3) {
      three();
    } else if (roll == 4) {
      four();
    } else if (roll == 5) {
      five();
    } else if (roll == 6) {
      six();
    }
  }
}
