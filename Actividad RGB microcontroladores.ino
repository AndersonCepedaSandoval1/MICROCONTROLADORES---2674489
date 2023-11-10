int red = D8;
int blue = D6;
int green = D7;

int redPrende = 0;
int bluePrende = 0;
int greenPrende = 0;

void setup() {

  pinMode (red,OUTPUT);
  pinMode (green,OUTPUT);
  pinMode (blue,OUTPUT);
  
    
  Serial.begin(115200);  
  }

void loop() {

  Serial.println("ingrese los valores para el RGB: ");

  Serial.print("Red :");
  redPrende = Serial.parseInt();
  Serial.println(redPrende);
  

  Serial.print("green :");
  greenPrende = Serial.parseInt();
  Serial.println(greenPrende);

  Serial.print("blue :");
  bluePrende = Serial.parseInt();
  Serial.println(bluePrende);
  Serial.println("  ");

  while(Serial.available()==0){
  }

  analogWrite(red, redPrende);
  analogWrite(green, greenPrende);
  analogWrite(blue, bluePrende); 

}