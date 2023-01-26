/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(0, OUTPUT);
  //pinMode(1, OUTPUT);
  for(int i = 0; i <= 13; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  for(int i = 0; i <= 13; i++){
    digitalWrite(i, LOW);
  }
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
}

// the loop function runs over and over again forever
void loop() {
  if(digitalRead(A5)&&!digitalRead(A4)&&!digitalRead(A3)&&!digitalRead(A2)){
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    for(int i = 4; i <= 13; i++){
    digitalWrite(i, LOW);
  }
  }else if(digitalRead(A5)&&!digitalRead(A4)&&digitalRead(A3)&&!digitalRead(A2)){
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    for(int i = 4; i <= 13; i++){
    digitalWrite(i, LOW);
  }
  }else if(!digitalRead(A5)&&digitalRead(A4)&&!digitalRead(A3)&&!digitalRead(A2)){
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    for(int i = 8; i <= 13; i++){
    digitalWrite(i, LOW);
    }
    for(int i = 0; i <= 3; i++){
    digitalWrite(i, LOW);
  }
  }else if(!digitalRead(A5)&&digitalRead(A4)&&digitalRead(A3)&&!digitalRead(A2)){
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    for(int i = 8; i <= 13; i++){
    digitalWrite(i, LOW);
    }
    for(int i = 0; i <= 3; i++){
    digitalWrite(i, LOW);
  }
  }else if(digitalRead(A5)&&digitalRead(A4)&&!digitalRead(A3)&&!digitalRead(A2)){
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    for(int i = 12; i <= 13; i++){
    digitalWrite(i, LOW);
    }
    for(int i = 0; i <= 7; i++){
    digitalWrite(i, LOW);
  }
  }else if(digitalRead(A5)&&digitalRead(A4)&&digitalRead(A3)&&!digitalRead(A2)){
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    for(int i = 12; i <= 13; i++){
    digitalWrite(i, LOW);
    }
    for(int i = 0; i <= 7; i++){
    digitalWrite(i, LOW);
  }
  }else if(!digitalRead(A5)&&!digitalRead(A4)&&digitalRead(A3)&&!digitalRead(A2)){
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A0, HIGH);
  
    for(int i = 0; i <= 11; i++){
    digitalWrite(i, LOW);
    }
  }else if(!digitalRead(A5)&&!digitalRead(A4)&&!digitalRead(A3)&&digitalRead(A2)){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(A0, LOW);
    digitalWrite(A1, HIGH);
    
    for(int i = 0; i <= 11; i++){
    digitalWrite(i, LOW);
    }
  }else{
    for(int i = 0; i <= 13; i++){
    digitalWrite(i, LOW);
  }
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  }
    // turn the LED on (HIGH is the voltage level)
  //delay(1000);                      // wait for a second
     // turn the LED off by making the voltage LOW
  //delay(1000);                      // wait for a second
}
