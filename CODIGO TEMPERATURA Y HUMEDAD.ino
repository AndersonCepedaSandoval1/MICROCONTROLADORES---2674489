#include "DHT.h"

#define DHTPIN D4

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


void setup() {
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
}