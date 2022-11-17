// MotorArm.cpp
#include "MotorArm.h"

MotorArm::MotorArm(int pA, int pB){
  pinA = pA;
  pinB = pB;
  s = 0;
  stime = 0;
  running = false;
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
}


void MotorArm::start(int sp){
  s = sp;
  running = true;
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

void MotorArm::Astart(int di, int sp){
  running = true;
  if(di > 0){
    analogWrite(pinA, sp);
    analogWrite(pinB, 0);
  }else if(di < 0){
    analogWrite(pinB, sp);
    analogWrite(pinA, 0);
  }else{
    analogWrite(pinA, 0);
    analogWrite(pinB, 0);
  }
}

void MotorArm::start(int di, int t){
  int ctime;
  if(!running){
    stime = millis();
    running = true;
  }
  ctime = millis() - stime;
  if(running && ctime < t){
    start(di);
  }
  if(running && ctime >= t){
    fStop();
  }

}

void MotorArm::fStop(){
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
running = false;
}

void MotorArm::aStop(){
  analogWrite(pinA, 0);
  analogWrite(pinB, 0);
  running = false;
}

String MotorArm::getPins(){
  return(pinA + " " + pinB);
}
