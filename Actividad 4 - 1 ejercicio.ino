void setup(){
  pinMode(D8,OUTPUT),
  pinMode(D7,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D3,INPUT);
  
  Serial.begin(9600);
}

void loop(){
  
  if(digitalRead(D3)==LOW){
    digitalWrite(D8,HIGH);
    digitalWrite(D4,LOW);
    delay(500);
    digitalWrite(D4,HIGH);
    digitalWrite(D7,HIGH);
    delay(500);
    digitalWrite(D7,LOW);
  } else { 
    digitalWrite(D4,LOW);
    delay(500);
    digitalWrite(D4,HIGH);
    digitalWrite(D7,HIGH);
    delay(500);
    digitalWrite(D7,LOW);
  }
  
}
