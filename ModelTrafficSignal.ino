int redpin = 12;
int yellowpin = 11;
int greenpin = 10;
int buttonpin = 2;
int colour = 1;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(buttonpin, INPUT);
  Serial.begin(9600);
}

void sequence() {
  if (colour == 1) {
    digitalWrite(redpin, HIGH);
    colour++;
  } else if (colour == 2) {
    digitalWrite(redpin, LOW);
    digitalWrite(yellowpin, HIGH);
    colour++;
  } else if (colour == 3) {
    digitalWrite(yellowpin, LOW);
    digitalWrite(greenpin, HIGH);
    colour++;
  } else if (colour == 4) {
    digitalWrite(greenpin, LOW);
    digitalWrite(yellowpin, HIGH);
    colour++;
  } else if (colour == 5) {
    digitalWrite(yellowpin, LOW);
    digitalWrite(redpin, HIGH);
    colour = 2;
  }
}
void loop() {
  int timer = 0;
  while (digitalRead(buttonpin) == HIGH) {
    while (digitalRead(buttonpin) == HIGH) {
      delay(1);
      timer++;
      Serial.println(timer);
      if (timer > 300) {
        break;
      }
      if (digitalRead(buttonpin) == LOW) {
        break;
      }
    }
    if (timer < 300) { 
      sequence();
    }
    if (timer > 300) {
      colour = 1;
      digitalWrite(redpin, LOW);
      digitalWrite(yellowpin, LOW);
      digitalWrite(greenpin, LOW);
      while (digitalRead(buttonpin) == HIGH) {
        if (digitalRead(buttonpin) == HIGH) {
          digitalWrite(redpin, HIGH);
          delay(400);
          digitalWrite(redpin, LOW);
          delay(500);
        } else {
          break;
        }
        if (digitalRead(buttonpin) == HIGH) {
          digitalWrite(yellowpin, HIGH);
          delay(250);
          digitalWrite(yellowpin, LOW);
          delay(500);
        } else {
          break;
        }
        if (digitalRead(buttonpin) == HIGH) {
          digitalWrite(greenpin, HIGH);
          delay(250);
          digitalWrite(greenpin, LOW);
          delay(500);
        } else {
          break;
        }
        if (digitalRead(buttonpin) == HIGH) {
          digitalWrite(yellowpin, HIGH);
          delay(250);
          digitalWrite(yellowpin, LOW);
          delay(500);
        } else {
          break;
        }
      }
    }
  }
}
