#include "MotorArm.h"

MotorArm M1(0,1);
MotorArm M2(A0, A1);
unsigned long time = millis();
unsigned long ctime;
unsigned long etime;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ctime = millis();
  etime = ctime - time;
  if(ctime < 1000){
    M1.start(-1);
    M2.Astart(1, 225);
  }
  if(ctime = 5000){
    M1.fStop();
    M2.aStop();
    Serial.println("stopping...");
  }
}
