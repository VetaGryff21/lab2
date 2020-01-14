#define LED1_R 2
#define LED1_G 3
#define LED1_B 4

#define LED2_R 5
#define LED2_G 6
#define LED2_B 7

#define LED3_R 8
#define LED3_G 9
#define LED3_B 10

#define LED4_R 11 
#define LED4_G 12
#define LED4_B 13

#define LED5_R 22
#define LED5_G 23
#define LED5_B 24

#define LED6_R 25
#define LED6_G 26
#define LED6_B 27

#define LED7_R 28
#define LED7_G 29
#define LED7_B 30

#define LED8_R 31 
#define LED8_G 32
#define LED8_B 33

#define LED9_R 34
#define LED9_G 35
#define LED9_B 36

#define LED10_R 37
#define LED10_G 38
#define LED10_B 39

#define LED11_R 40
#define LED11_G 41
#define LED11_B 42

#define LED12_R 43
#define LED12_G 44
#define LED12_B 45

#define LED13_R 46
#define LED13_G 47
#define LED13_B 48


void setRed(int pinOut) {
  Serial.print(" red "); 
  digitalWrite(pinOut, LOW);
  digitalWrite(pinOut+1, HIGH);
  digitalWrite(pinOut+2, HIGH);
}

void setGreen(int pinOut) {
  digitalWrite(pinOut, HIGH);
  digitalWrite(pinOut+1, LOW);
  digitalWrite(pinOut+2, HIGH);
}

void setBlue(int pinOut) {
  digitalWrite(pinOut, HIGH);
  digitalWrite(pinOut+1, HIGH);
  digitalWrite(pinOut+2, LOW);
}

void setYellow(int pinOut) {
  digitalWrite(pinOut, LOW);
  digitalWrite(pinOut+1, LOW);
  digitalWrite(pinOut+2, HIGH);
}

void setMagenta(int pinOut) {
  digitalWrite(pinOut, LOW);
  digitalWrite(pinOut+1, HIGH);
  digitalWrite(pinOut+2, LOW);
}

void setCyan(int pinOut) {
  digitalWrite(pinOut, HIGH);
  digitalWrite(pinOut+1, LOW);
  digitalWrite(pinOut+2, LOW);
}

void setWight(int pinOut) {
  digitalWrite(pinOut, LOW);
  digitalWrite(pinOut+1, LOW);
  digitalWrite(pinOut+2, LOW);
}

int setOff(int pinOut) {
  digitalWrite(pinOut, HIGH);
  digitalWrite(pinOut+1, HIGH);
  digitalWrite(pinOut+2, HIGH);
}
