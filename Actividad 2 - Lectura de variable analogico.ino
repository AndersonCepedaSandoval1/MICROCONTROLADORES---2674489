// SEGUNDO PUNTO
// Anderson cepeda Sandoval y Juan Sebastian Guanumen Romero
// 2674489 - Actividad 2

void setup()
{
  
  Serial.begin(9600);
  
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(11,INPUT);
  pinMode(6,OUTPUT);
  pinMode(10,INPUT);
  pinMode(5,OUTPUT);
  pinMode(9,INPUT);
  pinMode(A0,INPUT);
  
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);

 
}

void loop()
{
  int x=analogRead(A0);
  Serial.print("Valor: ");
  Serial.println(x);
  delay(1);
  
  if (analogRead(A0)<=956)
  {
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
  }
  
  else
  {
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
}

   
}
