#include<Servo.h>

Servo testServo;
int value;

void setup(){
  Serial.begin(9600);
  testServo.attach(2);
  pinMode(4, INPUT);
}

void loop(){
  RunServo(0);
  
  value = digitalRead(4);
  Serial.println(value);
  
  RunServo(180);
}

void RunServo(int a){
  for (int i = 0; i < 180; i++){
    testServo.write(i - a);
  }
  delay(1000);
}
