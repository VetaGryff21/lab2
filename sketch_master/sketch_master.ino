#include <Wire.h>
#include "pins.h"

#define BOARD_1 11
#define BOARD_2 2

void setup() {
 Serial.begin(9600);
  Serial.println("Started!");
  Wire.begin();
  
  for(int i = 0; i<= 51; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}

void loop() {
  while (Serial.available() > 0) {
    char in = Serial.read();
    int letter = (int)in - (int)'a';
    Serial.print(letter);
    int flag;
    if ((int)letter >= 0 && (int)letter <= 25) { 
      if(letter >= 0 && letter <= 13){
        switch(letter){
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
        case 13: {
          setGreen(LED14_R);
          flag = LED14_R;
          break;
        }
      }
      } else if(letter >= 14 && letter <= 25) {
        Wire.beginTransmission(BOARD_1);
        Wire.write(letter-14);
        Wire.endTransmission();
      }
    } else {
      setWight(LED1_R);
      flag = LED1_R;
    }
    delay(500);
    setOff(flag);
  }
}
