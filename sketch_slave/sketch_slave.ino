#include <Wire.h>
#include "pins.h"

int address = 11;
int flag = -1;
unsigned long timer;

void setup() {
  for(int i = 0; i<= 51; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  Serial.begin(9600);
  Wire.begin(address);
  Wire.onReceive(receiveEvent);
}

void loop() {
  if (millis() - timer >= 500) {
    if (flag != -1){
      timer = millis();
      setOff(flag);
      flag = -1;
    }  
  }
    
}

void receiveEvent() {
  while (Wire.available()) { // loop through all but the last
    int led = Wire.read();
    if (flag != -1){
      timer = millis();
      setOff(flag);
      flag = -1;
    }
      switch(led){
        case 0: {
          setRed(LED1_R);
          flag = LED1_R;
          break;
        }
          case 1: {
          setGreen(LED2_R);
          flag = LED2_R;
          break;
        }
        case 2: {
          setBlue(LED3_R);
          flag = LED3_R;
          break;
        }
        case 3: {
          setYellow(LED4_R);
          flag = LED4_R;
          break;
        }
        case 4: {
          setMagenta(LED5_R);
          flag = LED5_R;
          break;
        }
        case 5: {
          setCyan(LED6_R);
          flag = LED6_R;
          break;
        }
        case 6: {
          setRed(LED7_R);
          flag = LED7_R;
          break;
        }
        case 7: {
          setGreen(LED8_R);
          flag = LED8_R;
          break;
        }
        case 8: {
          setBlue(LED9_R);
          flag = LED9_R;
          break;
        }
        case 9: {
          setYellow(LED10_R);
          flag = LED10_R;
          break;
        }
        case 10: {
          setMagenta(LED11_R);
          flag = LED11_R;
          break;
        }
        case 11: {
          setCyan(LED12_R);
          flag = LED12_R;
          break;
        }
        case 12: {
          setRed(LED13_R);
          flag = LED13_R;
          break;
        }
      }
      timer = millis();
    }
}
