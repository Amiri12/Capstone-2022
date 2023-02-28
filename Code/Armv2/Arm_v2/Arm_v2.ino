/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a range from 0 to 255 and uses
  the result to set the pulse width modulation (PWM) of an output pin.
  Also prints the results to the Serial Monitor.

  The circuit:
  - potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the analog pin.
    side pins of the potentiometer go to +5V and ground
  - LED connected from digital pin 9 to ground through 220 ohm resistor

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInOutSerial
*/

// These constants won't change. They're used to give names to the pins used:
const int stickL = A2;
const int stickR = A0;// Analog input pin that the potentiometer is attached to
const int M1Pin = 9;
const int M2Pin = 10;// Analog output pin that the LED is attached to

int sensorValueL = 0;        // value read from the pot
int outputValueL = 0;        // value output to the PWM (analog out)

int sensorValueR = 0;        // value read from the pot
int outputValueR = 0; 

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValueL = analogRead(stickL);
  // map it to the range of the analog out:
  outputValueL = map(sensorValueL, 0, 1023, -255, 255);
  sensorValueR = analogRead(stickR);
  // map it to the range of the analog out:
  outputValueR = map(sensorValueR, 0, 1023, -255, 255);
  // change the analog out value:
  if(outputValueL > 25){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    analogWrite(M1Pin, outputValueL);
  } else if(outputValueL < -25){
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    analogWrite(M1Pin, -outputValueL);
  }else{
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    analogWrite(M1Pin, -outputValueL);
  }

  if(outputValueR > 25){
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    analogWrite(M2Pin, outputValueR);
  } else if(outputValueR < -25){
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    analogWrite(M2Pin, -outputValueR);
  }else{
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    analogWrite(M2Pin, -outputValueR);
  }

  // print the results to the Serial Monitor:
  Serial.print("sensorL = ");
  Serial.print(sensorValueL);
  Serial.print("\t outputL = ");
  Serial.print(outputValueL);
  Serial.print("\t sensorR = ");
  Serial.print(sensorValueR);
  Serial.print("\t outputR = ");
  Serial.println(outputValueR);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
