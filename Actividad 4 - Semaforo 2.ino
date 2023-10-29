// Microcontroladores - 2674489
// Actividad 4
// Anderson Cepeda Sandoval y Juan Sebastian Guanumen

long valor;
int var1 = 11;   
int var2 = 10;
int var4 = A0;

int led = 7;    
int led1 = 6;  
int led2 = 5;  

int contador = 0;
int sensor;

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
 
  sensor = analogRead(A0);
    
  if (digitalRead(11) == HIGH && digitalRead(10)== LOW){ 
    
     digitalWrite(led, HIGH);
    delay (5000/sensor);
    digitalWrite(led, LOW);

	Serial.print("El led a paso por HIGH: ");
  
  contador = led + contador++ - 6;
  Serial.print(contador);
    delay (sensor);
  
 Serial.println("  ");
  
  Serial.print("El valor del potencimetro es = ");
  Serial.println(sensor);
    
    digitalWrite(led, HIGH);
    digitalWrite(led1, HIGH);
    delay (1000/sensor);
    digitalWrite(led, LOW);
    digitalWrite(led1, LOW);

    digitalWrite(led2, HIGH);
    delay (3000/sensor);
    digitalWrite(led2, LOW);

    digitalWrite(led1, HIGH);
    delay (1000/sensor);
     digitalWrite(led1, LOW);
    } 

  if (digitalRead(11)== LOW && digitalRead(10)== HIGH){ 
   digitalWrite(led1, HIGH);
   delay (500/sensor);
   digitalWrite(led1, LOW);
   delay (500/sensor);
    
   Serial.print("El valor del potencimetro es = "); 
   Serial.println(sensor);
   delay (500/sensor);

  }
  
  if (digitalRead(11)== HIGH && digitalRead(13)== HIGH){ 

    digitalWrite(led, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  
 }
