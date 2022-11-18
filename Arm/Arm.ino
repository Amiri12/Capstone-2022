#include "MotorArm.h"

MotorArm M1(10,11);
MotorArm M2(A0, A1);
unsigned long time = millis();
unsigned long ctime;
unsigned long etime;
bool temp = false;
int b = 0;
bool f1 = false;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
  M1.start(1, 500);
  if(!M1.getRunning()){
    Serial.print("not");
    delay(3000);
  }
}
  /*
  if(Serial.available()){
    int t = Serial.parseInt();
    if(t<0){
      Serial.print(t);
      Serial.println("yes");
      f1 = true;
      temp = false;
      b = -t;
      
    }

    if(t > 0){
      Serial.print(t);
      Serial.println("yes");
      temp = true;
      f1 = false;
      b = t;
     // M1.start(-1,b);
    }
  }

  if(temp){
    //Serial.println("working");
    M1.start(-1, b);
    //Serial.print(M1.getRunning());
    temp = M1.getRunning();
  }
  if(f1){
    //Serial.println("working");
    M1.start(1, b);
    //Serial.print(M1.getRunning());
    f1 = M1.getRunning();
  }
  delay(1);
}*/
