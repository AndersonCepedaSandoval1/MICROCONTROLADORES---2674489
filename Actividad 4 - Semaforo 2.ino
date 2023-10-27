// Microcontroladores - 2674489
// Actividad 2
// Anderson Cepeda Sandoval y Juan Sebastian Guanumen

int var1 = 11;   
int var2 = 10;
int var4 = A0;

int led = 7;    
int led1 = 6;  
int led2 = 5;  

int contador = 0;
void setup() {
  pinMode(var1, INPUT);     
  pinMode(var2, INPUT);
  pinMode(var4, INPUT);
  pinMode(led, OUTPUT);   
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop()

{ 
    
  if (digitalRead(11) == HIGH && digitalRead(10)== LOW){ 
    
  digitalWrite(led, HIGH);
  delay (analogRead(A0));
  digitalWrite(led, LOW);
    
  contador = led + contador++ - 6;
  Serial.print(contador);
    delay (analogRead(A0));
    
  digitalWrite(led, HIGH);
  digitalWrite(led1, HIGH);
  delay (analogRead(A0));
  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
    
  digitalWrite(led2, HIGH);
  delay (analogRead(A0));
  digitalWrite(led2, LOW);
    
  digitalWrite(led1, HIGH);
  delay (analogRead(A0));
   digitalWrite(led1, LOW);
    
    Serial.print(analogRead(A0));
   delay (500);
 } 
  
  if (digitalRead(11)== LOW && digitalRead(10)== HIGH){ 
   digitalWrite(led1, HIGH);
   delay (analogRead(A0));
   digitalWrite(led1, LOW);
   delay (analogRead(A0));
    
   Serial.print(analogRead(A0));
   delay (500);
 
  }
  
  if (digitalRead(11)== HIGH && digitalRead(13)== HIGH){ 

    digitalWrite(led, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  
 }
