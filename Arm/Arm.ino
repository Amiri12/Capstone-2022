#include "MotorArm.h"

MotorArm M1(0,1);
MotorArm M2(2, 3);
MotorArm M3(4, 5);
MotorArm M4(6,7);
MotorArm M5(8, 9);
MotorArm M6(10, 11);
MotorArm M7(12, 13);
MotorArm M8(A0, A1);
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
    in1 = 2000;
  }else{
    in1 = 1;
  }
  if(digitalRead(A3)){
    in2 = 200;
  }else{
    in2 = 1;
  }
  if(digitalRead(A4)){
    in3 = 20;
  }else{
    in3 = 1;
  }
  if(digitalRead(A5)){
    in4 = 2;
  }else{
    in4 = 1;
  }
    
    
    nib = in1+in2+in3+in4;
    
    if(nib == 5){
      Serial.print(1);
      M1.start(1);
      M2.start(-1);
      M3.fStop();
      M4.fStop();
      M5.fStop();
      M6.fStop();
      M7.fStop();
      M8.fStop();
    }else if(nib == 23){
      Serial.print(2);
      M1.fStop();
      M2.fStop();
      M3.start(1);
      M4.start(-1);
      M5.fStop();
      M6.fStop();
      M7.fStop();
      M8.fStop();
    }else if(nib == 24){
      Serial.print(3);
      M1.fStop();
      M2.fStop();
      M3.fStop();
      M4.fStop();
      M5.start(1);
      M6.start(-1);
      M7.fStop();
      M8.fStop();
    }else if(nib == 203){
      Serial.print(4);
      M1.fStop();
      M2.fStop();
      M3.fStop();
      M4.fStop();
      M5.fStop();
      M6.fStop();
      M7.start(1);
      M8.start(-1);      
    }else if(nib == 204){
      Serial.print(5);
      M1.start(-1);
      M2.start(1);
      M3.fStop();
      M4.fStop();
      M5.fStop();
      M6.fStop();
      M7.fStop();
      M8.fStop();
    }else if(nib == 222){
      Serial.print(6);
      M1.fStop();
      M2.fStop();
      M3.start(-1);
      M4.start(1);
      M5.fStop();
      M6.fStop();
      M7.fStop();
      M8.fStop();      
    }else if(nib == 223){
      Serial.print(7);
      M1.fStop();
      M2.fStop();
      M3.fStop();
      M4.fStop();
      M5.start(-1);
      M6.start(1);
      M7.fStop();
      M8.fStop();
    }else if(nib == 2003){
      Serial.print(8);
      M1.fStop();
      M2.fStop();
      M3.fStop();
      M4.fStop();
      M5.fStop();
      M6.fStop();
      M7.start(-1);
      M8.start(1);
    }else{
      Serial.print(0);
      digitalWrite(0, HIGH);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      digitalWrite(A0, LOW);
      digitalWrite(A1, LOW);

      
    }
    Serial.print("\t");
  Serial.print(in1);
    Serial.print(in2);
    Serial.print(in3);
    Serial.print(in4);
    Serial.print("\t");
    Serial.println(nib);
}




