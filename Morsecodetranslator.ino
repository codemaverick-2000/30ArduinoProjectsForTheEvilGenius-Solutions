#include <string.h>
void dash() {
    digitalWrite(8, HIGH);
    delay(1500);
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
pinMode(8, OUTPUT);
Serial.begin(9600);
}
void loop() {
  String life = Serial.readString();
   char input[100];
  while(Serial.available() == 0){
  }
  life.toCharArray(input, 100);
    int i = 0;
    while(input[i] != 0){
       Serial.println(input[i], DEC);
    switch(input[i]){
      case 97:
    dot(); dash();
    break;
    case 65:
    dot(); dash();
    break;
    case 98
    dash(); dot(); dot(); dot();
    break;
    case 66:
    dash(); dot(); dot(); dot();
    break;
    case 99:
    dash(); dot(); dash(); dot();
    break;
    case 67:
    dash(); dot(); dash(); dot();
    break;
    case 100:
    dash(); dot(); dot();
    break;
    case 68:
    dash(); dot(); dot();
    break;
    case 101:
    dot();
    break;
    case 69:
    dot();
    break;
    case 102:
    dot(); dot(); dash(); dot();
    break;
    case 70:
    dot(); dot(); dash(); dot();
    break;
    case 103:
    dash(); dash(); dot();
    break;
    case 71:
    dash(); dash(); dot();
    break;
    case 104:
    dot(); dot(); dot(); dot();
    break;
    case 72:
    dot(); dot(); dot(); dot();
    break;
    case 105:
    dot(); dot();
    break;
    case 73:
    dot(); dot();
    break;
    case 106:
    dot(); dash(); dash(); dash();
    break;
    case 74:
    dot(); dash(); dash(); dash();
    break;
    case 107:
    dash(); dot(); dash();
    break;
    case 75:
    dash(); dot(); dash();
    break;
    case 108:
    dot(); dash(); dot(); dot();
    break;
    case 76:
    dot(); dash(); dot(); dot();
    break;
    case 109:
    dash(); dash();
    break;
    case 77:
    dash(); dash();
    break;
    case 110:
    dash(); dot();
    break;
    case 78:
    dash(); dot();
    break;
    case 111:
    dash(); dash(); dash();
    break;
    case 79:
    dash(); dash(); dash();
    break;
    case 112:
    dot(); dash(); dash(); dot();
    break;
    case 80:
    dot(); dash(); dash(); dot();
    break;
    case 113:
    dash(); dash(); dot(); dash();
    break;
    case 81:
    dash(); dash(); dot(); dash();
    break;
    case 114:
    dot(); dash(); dot();
    break;
    case 82:
    dot(); dash(); dot();
    break;
    case 115:
    dot(); dot(); dot();
    break;
    case 83:
    dot(); dot(); dot();
    break;
    case 116:
    dash();
    break;
    case 84:
    dash();
    break;
    case 117:
    dot(); dot(); dash();
    break;
    case 85:
    dot(); dot(); dash();
    break;
    case 118:
    dot(); dot(); dot(); dash();
    break;
    case 86:
    dot(); dot(); dot(); dash();
    break;
    case 119:
    dot(); dash(); dash();
    break;
    case 87:
    dot(); dash(); dash();
    break;
    case 120:
    dash(); dot(); dot(); dash();
    break;
    case 88:
    dash(); dot(); dot(); dash();
    break;
    case 121:
    dash(); dot(); dash(); dash();
    break;
    case 89:
    dash(); dot(); dash(); dash();
    break;
    case 122:
    dash(); dash(); dot(); dot();
    break;
    case 90:
    dash(); dash(); dot(); dot();
    break;
    case 32:
    delay(1000);
    break;
    default:
    delay(2020);
    }
      i++;
    }
}
