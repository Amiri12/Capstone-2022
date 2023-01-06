#include "MotorArm.h"

MotorArm M1(10,11);
MotorArm M2(A0, A1);
int in1;
int in2;
int in3;
int in4;
int nib;
void setup() {
  
  Serial.begin(9600);
}

void loop() {
    in1 = analogRead(A2)*1000;
    in2 = analogRead(A3)*100;
    in3 = analogRead(A4)*10;
    in4 = analogRead(A5);
    nib = in1+in2+in3+in4;
    Serial.println(nib);
    if(nib == 0001){
      M1.start(1);
      M2.start(-1);
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();
    }else if(nib == 0010){
      M1.stop();
      M2.stop();
      M3.start(1);
      M4.start(-1);
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();
    }else if(nib == 0011){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.start(1);
      M6.start(-1);
      M7.stop();
      M8.stop();
    }else if(nib == 0100){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.start(1);
      M8.start(-1);      
    }else if(nib == 0101){
      M1.start(-1);
      M2.start(1);
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();
    }else if(nib == 0110){
      M1.stop();
      M2.stop();
      M3.start(-1);
      M4.start(1);
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();      
    }else if(nib == 0111){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.start(-1);
      M6.start(1);
      M7.stop();
      M8.stop();
    }else if(nib == 1000){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.start(-1);
      M8.start(1);
    }else if(nib == 0000){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();
    }else if(in1/1000 == 1){
      M1.start(in4);
      M2.stop();
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();
    }else if(in1/1000 == 2){
      M1.stop();
      M2.start(in4));
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();
    }else if(in1/1000 == 3){
      M1.stop();
      M2.stop();
      M3.start(in4));
      M4.stop();
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();
    }else if(in1/1000 == 4){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.start(in4));
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();
    }else if(in1/1000 == 5){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.start(in4));
      M6.stop();
      M7.stop();
      M8.stop();
    }else if(in1/1000 == 6){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.stop();
      M6.start(in4));
      M7.stop();
      M8.stop();
    }else if(in1/1000 == 7){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.start(in4));
      M8.stop();
    }else if(in1/1000 == 8){
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.stop();
      M8.start(in4));      
    }else{
      M1.stop();
      M2.stop();
      M3.stop();
      M4.stop();
      M5.stop();
      M6.stop();
      M7.stop();
      M8.stop();
    }
}

