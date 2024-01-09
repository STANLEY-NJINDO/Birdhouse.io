#include <Arduino.h>

// put function declarations here:
#define 48 x
#define 50 y

void setup() {
  // put your setup code here, to run once:
 pinMode(x,OUTPUT);
 pinMode(y,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}
digitalWrite(x,HIGH);
digitalWrite(y,LOW);
delay(1000);
digitalWrite(x,LOW);
digitalWrite(y,HIGH);
delay(1000);
// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}