#include "MotorArm.h"

MotorArm M1(10,11);
MotorArm M2(A0, A1);
int in1;
int in2;
int in3;
int in4;
void setup() {
  
  Serial.begin(9600);
}

void loop() {
    in1 = analogRead(A2);
    in2 = analogRead(A3);
    in3 = analogRead(A4);
    in4 = analogRead(A5);
}
