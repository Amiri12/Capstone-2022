#include "MotorArm.h"

MotorArm M1(0,1);
MotorArm M2(A0, A1);
unsigned long time = millis();
unsigned long ctime;
unsigned long etime;
bool temp = false;
int b = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(Serial.available()){
    int t = Serial.parseInt();
    if(t<0){
      Serial.println("no");
      
    }

    if(t > 0 && t<= 10000){
      Serial.print(t);
      Serial.println("yes");
      temp = true;
      b = t;
    }
  }

  if(temp){
    //Serial.println("working");
    M1.start(1, b);
    //Serial.print(M1.getRunning());
    temp = M1.getRunning();
  }
}
