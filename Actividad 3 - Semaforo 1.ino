// Microcontroladores - 2674489
// Actividad 3
// Anderson Cepeda Sandoval y Juan Sebastian Guanumen

bool var1 = 11;   
bool var2 = 10;
bool var3 = 9;

int led = 7;    
int led1 = 6;  
int led2 = 5;  

void setup() {
  pinMode(var1, INPUT);     
  pinMode(var2, INPUT);
  pinMode(var3, INPUT); 
  pinMode(led, OUTPUT);   
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  
}

void loop()

{
  
  if (digitalRead(11) == HIGH && digitalRead(10)== LOW){ 
    
  digitalWrite(led, HIGH);
  delay (5000);
  digitalWrite(led, LOW);
    
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
  
  if (digitalRead(11)== LOW && digitalRead(10)== HIGH){ 
   digitalWrite(led1, HIGH);
   delay (500);
   digitalWrite(led1, LOW);
   delay (500);
 
  }
  
  if (digitalRead(11)== HIGH && digitalRead(10)== HIGH){ 

    digitalWrite(led, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  
 }
 




