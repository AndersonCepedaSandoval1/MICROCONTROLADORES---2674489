// Microcontroladores - 2674489
// Actividad 2
// Anderson Cepeda Sandoval y Juan Sebastian Guanumen

int var1 = 13;   
int var2 = 12;
int var3 = 11;
int var4 = 10;

int led = 7;    
int led1 = 6;  
int led2 = 5;  

int A = 0;    
int B = 0;
int C = 0;
int D = 0;

int resultado = 0;      

int resultado1 = 0; 

int resultado2 = 0;

void setup() {
  pinMode(var4, INPUT);
  pinMode(var1, INPUT);     
  pinMode(var2, INPUT);
  pinMode(var3, INPUT);
  
  
  pinMode(led, OUTPUT);   
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
}

void loop(){
  A = digitalRead(var1);  
  B = digitalRead(var2);
  C = digitalRead(var3);
  D = digitalRead(var4);
  
  
  resultado = (!C && D && !B && !A) || (C && !D && !B && !A) || (!C && !D && !A && B) || (C && D && B) || (C && A && D) || (D && A && B) || (C && A && B);
  
  digitalWrite(led, resultado);    
  
  resultado1 = (A && B && C && D);
  
  digitalWrite(led1, resultado1);  
  
  resultado2 = ( C && D) || (B && D) || (B && C) || (A && D) || (A && C) || (A && B);
  
  digitalWrite(led2, resultado2);  
}