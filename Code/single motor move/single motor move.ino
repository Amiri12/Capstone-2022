void setup() {
  // put your setup code here, to run once:
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(6)){
    Serial.println("f");
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }else if(digitalRead(7)){
    Serial.println("b");
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }

}
