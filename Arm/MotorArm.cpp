// MotorArm.cpp
#include "MotorArm.h"

MotorArm::MotorArm(int pA, int pB){
  pinA = pA;
  pinB = pB;
  s = 0;
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
}


void MotorArm::start(int sp){
  s = sp;
  if(s > 0){
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, LOW);
  }else if(s < 0){
    digitalWrite(pinB, HIGH);
    digitalWrite(pinA, LOW);
  }else{
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
  }
}

void MotorArm::fStop(){
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
}

String MotorArm::getPins(){
  return(pinA + " " + pinB);
}
