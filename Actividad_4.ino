// Microcontroladores - 2674489
// Actividad 2
// Anderson Cepeda Sandoval y Juan Sebastian Guanumen

int var1 = 13;   
int var2 = 12;
int var3 = 11;
int var4 = A0;

int led = 7;    
int led1 = 6;  
int led2 = 5;  

int contador = 0;
void setup() {
  pinMode(var1, INPUT);     
  pinMode(var2, INPUT);
  pinMode(var3, INPUT); 
  pinMode(var4, INPUT);
  pinMode(led, OUTPUT);   
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop()

{ 
    
  if (digitalRead(13) == HIGH && digitalRead(12)== LOW){ 
    
  digitalWrite(led, HIGH);
  delay (5000);
  digitalWrite(led, LOW);
    
  contador = led + contador++ - 6;
  Serial.print(contador);
    delay (500);
    
  digitalWrite(led, HIGH);
  digitalWrite(led1, HIGH);
  delay (1000);
  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
    
  digitalWrite(led2, HIGH);
  delay (3000);
  digitalWrite(led2, LOW);
    
  digitalWrite(led1, HIGH);
  delay (1000);
   digitalWrite(led1, LOW);
 } 
  
  if (digitalRead(13)== LOW && digitalRead(12)== HIGH){ 
   digitalWrite(led1, HIGH);
   delay (analogRead(A0));
   digitalWrite(led1, LOW);
   delay (analogRead(A0));
 
  }
  
  if (digitalRead(13)== HIGH && digitalRead(13)== HIGH){ 

    digitalWrite(led, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  
 }
 




