void setup(){
  pinMode(D8,OUTPUT),
  pinMode(D7,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(D3,INPUT);
  
  Serial.begin(115200);
}

void loop(){
  
   int x=analogRead(A0);
  
    Serial.println("El valor minimo es de: 100");
    delay(1000);
    Serial.println("El valor intermedio es de: 510");
    delay(1000);
    Serial.println("El valor maximo de: 1024 ");
     delay(1000);
    Serial.print("Valor del potenciometro: ");
    Serial.println(x);
    delay(500);
    Serial.println("");
  
  if (analogRead(A0)<100)
  {
      digitalWrite(D7,HIGH);
      digitalWrite(D4,LOW);
      digitalWrite(D8,HIGH);
      delay(200);
      digitalWrite(D7,LOW);
      digitalWrite(D4,HIGH);
      digitalWrite(D8,LOW);
      delay(100);
  }
  
  if(analogRead(A0)>=101 && analogRead(A0)<=510)
  {
    digitalWrite(D8,LOW);
    digitalWrite(D7,LOW);
      digitalWrite(D4,LOW);
      delay(500);
      digitalWrite(D4,HIGH);
      delay(500);
  }
  
  if(analogRead(A0)>=514)
  {
      digitalWrite(D7,HIGH);
      digitalWrite(D8,LOW);
      digitalWrite(D4,HIGH);
  }
  
  if(analogRead(A0)==1024)
  {
      digitalWrite(D8,HIGH);
      digitalWrite(D7,LOW); 
      digitalWrite(D4,HIGH);
  }
 
 
   
}