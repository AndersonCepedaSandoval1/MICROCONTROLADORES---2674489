#include "HX711.h"  
#define DT 4    
#define SCK 5    

#define LEDV 23 
#define LEDR 19
int EnA = 22;

int reference = 45;
int error = 0;
float peso = 0;
float k = 5;
float velocidad_motor = 0;

HX711 celda;   // crea objeto con nombre celda

void setup() {
  Serial.begin(115200); 
  Serial.println("Balanza con celda de carga"); 

  celda.begin(DT, SCK);   // inicializa objeto con los pines a utilizar

  celda.set_scale(207.f);  // establece el factor de escala obtenido del primer programa
  celda.tare(4);     // realiza la tara o puesta a cero

    pinMode(LEDV,OUTPUT);
    pinMode(LEDR,OUTPUT);
    pinMode(EnA,OUTPUT);
}

void loop() {

  peso = celda.get_units(10);

  Serial.print("Peso del objeto: ");  
  Serial.println(celda.get_units(10), 1); // muestra el valor obtenido promedio de 10 lecturas
  
  celda.power_down();   
  delay(2000);      
  celda.power_up();      

if( peso > 30 ){
 
  digitalWrite(LEDV, HIGH);
  digitalWrite(LEDR, LOW);
} 

if(peso >= -6 && peso <= 29){
  digitalWrite(LEDV, LOW);
  digitalWrite(LEDR, HIGH);
}

 error = reference - peso;
  velocidad_motor = k * error;


  Serial.print("ERROR :");
  Serial.println(error);
  Serial.print("MOTOR :");
  Serial.println(velocidad_motor);


 analogWrite(EnA, velocidad_motor);
 
if (error<=0){

  digitalWrite(EnA,LOW);
}else{
  analogWrite(EnA, velocidad_motor);
}

}
