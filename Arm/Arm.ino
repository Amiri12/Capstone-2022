#include "MotorArm.h"

MotorArm M1(10,11);
MotorArm M2(A0, A1);
MotorArm M3(9, 8);
MotorArm M4(10,11);
MotorArm M5(0, 1);
MotorArm M6(3, 4);
MotorArm M7(1, 2);
MotorArm M8(6, 4);
int in1;
int in2;
int in3;
int in4;
int nib;
void setup() {
  
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(A2)){
    in1 = 1000;
  }else{
    in1 = 0;
  }
  if(digitalRead(A3)){
    in2 = 100;
  }else{
    in2 = 0;
  }
  if(digitalRead(A4)){
    in3 = 10;
  }else{
    in3 = 0;
  }
  if(digitalRead(A5)){
    in4 = 1;
  }else{
    in4 = 0;
  }
    
    
    nib = in1+in2+in3+in4;
    Serial.println(nib);
    if(nib == 0001){
      M1.start(1);
      M2.start(-1);
      M3.fStop();
      M4.fStop();
      M5.fStop();
      M6.fStop();
      M7.fStop();
      M8.fStop();
    }else if(nib == 0010){
      M1.fStop();
      M2.fStop();
      M3.start(1);
      M4.start(-1);
      M5.fStop();
      M6.fStop();
      M7.fStop();
      M8.fStop();
    }else if(nib == 0011){
      M1.fStop();
      M2.fStop();
      M3.fStop();
      M4.fStop();
      M5.start(1);
      M6.start(-1);
      M7.fStop();
      M8.fStop();
    }else if(nib == 0100){
      M1.fStop();
      M2.fStop();
      M3.fStop();
      M4.fStop();
      M5.fStop();
      M6.fStop();
      M7.start(1);
      M8.start(-1);      
    }else if(nib == 0101){
      M1.start(-1);
      M2.start(1);
      M3.fStop();
      M4.fStop();
      M5.fStop();
      M6.fStop();
      M7.fStop();
      M8.fStop();
    }else if(nib == 0110){
      M1.fStop();
      M2.fStop();
      M3.start(-1);
      M4.start(1);
      M5.fStop();
      M6.fStop();
      M7.fStop();
      M8.fStop();      
    }else if(nib == 0111){
      M1.fStop();
      M2.fStop();
      M3.fStop();
      M4.fStop();
      M5.start(-1);
      M6.start(1);
      M7.fStop();
      M8.fStop();
    }else if(nib == 1000){
      M1.fStop();
      M2.fStop();
      M3.fStop();
      M4.fStop();
      M5.fStop();
      M6.fStop();
      M7.start(-1);
      M8.start(1);
    }else if(nib == 0000){
      M1.fStop();
      M2.fStop();
      M3.fStop();
      M4.fStop();
      M5.fStop();
      M6.fStop();
      M7.fStop();
      M8.fStop();

}
}

