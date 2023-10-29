int var1 = 4;   
int var2 = 3;
int ledR = 7;  
int ledV = 5;  

int disponible = 0;
float dinero = 0;

void salida () {
if(digitalRead(var1)){  
   disponible+=1;  
   dinero+=5000; 
 } 
} 

void entrada () {
if(digitalRead(var2)){  
  if(disponible>=1 && disponible <=10)
   disponible-=1;  
  }
}
  void setup()
  {
    pinMode(var1,INPUT);
    pinMode(var2,INPUT);
    pinMode(ledV,OUTPUT);
    pinMode(ledR,OUTPUT);
    
    Serial.begin(9600);
  }

  void loop()
  {
    
   
  if (digitalRead(var1)){  
     
     salida();
  }
   
    
 if(disponible >10){
  		disponible+=-1;
   		dinero-=5000;
	}
    
  if (digitalRead(var2)){  
     
     entrada();
  }
 
     
  if(disponible >0 && disponible <= 10)
  { 
    digitalWrite(ledV,HIGH);
    digitalWrite(ledR,LOW);
    
  } else{
    digitalWrite(ledR,HIGH);
     digitalWrite(ledV,LOW);
  }
 
  Serial.print("Cupos reservados: ");
  Serial.println(10 - disponible);  
  Serial.print("Cupos disponibles: ");
  Serial.println(disponible);
  Serial.print("Dinero recibido: ");
  Serial.println(dinero);
  delay(2000);
    
    
  }
 

 
