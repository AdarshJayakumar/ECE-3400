void setup(){
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}

void loop(){
  int y = digitalRead(4);
  if(y==HIGH){
    delay(500);
    y= digitalRead(4);
    if (y==HIGH){
      int x= analogRead(A5);
      x=x>>2;
      Serial.println(x);
      analogWrite(3,x);
    }
  }
}
