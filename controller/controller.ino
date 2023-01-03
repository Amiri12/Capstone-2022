/*

*/

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9;  

int LX = 0;
int LY = 0;
int RX = 0;
int RY = 0;
int LXO = 0;
int LYO = 0;
int RXO = 0;
int RYO = 0;  // value read from the pot
int out[] = {0,0,0,0};
  // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // read the analog in value:
  RX = analogRead(A0);
  RY = analogRead(A1);
  LX = analogRead(A3);
  LY = analogRead(A2);
  // map it to the range of the analog out:
  RXO = map(RX, 0, 1023, -512, 512);
  LXO = map(LX, 0, 1023, -512, 512);
  RYO = map(RY, 0, 1023, -512, 512);
  LYO = map(LY, 0, 1023, -512, 512);
  // change the analog out value:
  //analogWrite(analogOutPin, outputValue);

  // print the results to the Serial Monitor:
  Serial.print("RX=");
  Serial.print(RXO);
  Serial.print("\t RY=");
  Serial.print(RYO);
  Serial.print("\t LX=");
  Serial.print(LXO);
  Serial.print("\t LY=");
  Serial.print(LYO);
  Serial.print("\t OUT=");
  Serial.print(out[0]);
  Serial.print(out[1]);
  Serial.print(out[2]);
  Serial.println(out[3]);

  if(RYO > 250 && -240 < RXO && RXO < 240){
    out[0] = 1;
    out[1] = 0;
    out[2] = 0;
    out[3] = 0;
  }
  else if(RYO < -250 && -240 < RXO && RXO < 240){
    out[0] = 1;
    out[1] = 0;
    out[2] = 1;
    out[3] = 0;
  }
  else if(RXO < -250 && -240 < RYO && RYO < 240){
    out[0] = 1;
    out[1] = 1;
    out[2] = 1;
    out[3] = 0;
  }
  else if(RXO > 250 && -240 < RYO && RYO < 240){
    out[0] = 1;
    out[1] = 1;
    out[2] = 0;
    out[3] = 0;
  }
  else if(RXO > 250 && RYO > 250){
    out[0] = 0;
    out[1] = 1;
    out[2] = 0;
    out[3] = 0;
  }
  else if(RXO < -250 && RYO < -250){
    out[0] = 0;
    out[1] = 1;
    out[2] = 1;
    out[3] = 0;
  }
  else if(RXO < -250 && RYO > 250){
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    out[3] = 1;
  } 
  else if(RXO > 250 && RYO < -250){
    out[0] = 0;
    out[1] = 0;
    out[2] = 1;
    out[3] = 0;
  }
  else{
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    out[3] = 0;
  }

  if(out[0] == 1){
    digitalWrite(11, HIGH);
  }else{
    digitalWrite(11, LOW);
  }

  if(out[1] == 1){
    digitalWrite(10, HIGH);
  }else{
    digitalWrite(10, LOW);
  }

  if(out[2] == 1){
    digitalWrite(9, HIGH);
  }else{
    digitalWrite(9, LOW);
  }

  if(out[3] == 1){
    digitalWrite(8, HIGH);
  }else{
    digitalWrite(8, LOW);
  }

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
