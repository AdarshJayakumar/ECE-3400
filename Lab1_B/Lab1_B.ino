#include <Servo.h>
Servo myServo;

void setup(){
  
  myServo.attach(3);
}

void loop(){
  
  myServo.write();
}
