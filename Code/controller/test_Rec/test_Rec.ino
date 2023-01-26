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
const int analogInPin0 = A0;
const int analogInPin1 = A1;
const int analogInPin2 = A2;
const int analogInPin3 = A3;  // Analog input pin that the potentiometer is attached to
  // Analog output pin that the LED is attached to

int sensorValue0 = 0;
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;  // value read from the pot


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue0 = analogRead(analogInPin0);
  // map it to the range of the analog out:
  sensorValue0 = map(sensorValue0, 0, 1010, 0, 1);

  sensorValue1 = analogRead(analogInPin1);
  // map it to the range of the analog out:
  sensorValue1 = map(sensorValue1, 0, 1010, 0, 1);

  sensorValue2 = analogRead(analogInPin2);
  // map it to the range of the analog out:
  sensorValue2 = map(sensorValue2, 0, 1010, 0, 1);
  
  sensorValue3 = analogRead(analogInPin3);
  // map it to the range of the analog out:
  sensorValue3 = map(sensorValue3, 0, 1010, 0, 1);
  // change the analog out value:
  

  // print the results to the Serial Monitor:
  Serial.print(sensorValue0);
  Serial.print(sensorValue1);
  Serial.print(sensorValue2);
  Serial.println(sensorValue3);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:

}
