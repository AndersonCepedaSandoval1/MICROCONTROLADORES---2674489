#include "DHT.h"

#define DHTPIN D4

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


void setup() {

    pinMode(D1,OUTPUT);
    pinMode(D2,OUTPUT);
    
  Serial.begin(115200);

 dht.begin();
   
}

void loop(){
   delay(3000);

   float h = dht.readHumidity();
   float t = dht.readTemperature();


   if (isnan(h) || isnan(t)) {
    Serial.println("Error obtenido de los datos del sensor");
    return;
   }

   float hic = dht.computeHeatIndex(t, h, false);


  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura");
  Serial.print(t);
  Serial.println(" *c ");
  
 if ((h)>70){
digitalWrite (D1,LOW);
digitalWrite (D2,LOW);
  }

 if ((t)>=24 && (t)<=28){
digitalWrite (D1,HIGH);
digitalWrite (D2,LOW);
  }

  if ((h)>=30 && (h)<40){
digitalWrite (D1,LOW);
digitalWrite (D2,HIGH);
  }

if ((h)>=50){
digitalWrite (D1,HIGH);
digitalWrite (D2,HIGH);
}
}