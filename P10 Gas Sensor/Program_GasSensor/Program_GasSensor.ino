// LCD
#include<LiquidCrystal.h>
LiquidCrystal lcd(12 , 11 , 5 ,4 ,3 ,2);

//define pin
int Gas = 9;
int redLed = 7;
int greenLed = 6;


void setup() {
pinMode(Gas , INPUT);
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
}


void loop() {


if(digitalRead(Gas) == HIGH){
  lcd.setCursor(0,0);
  lcd.print(" Gas Detected ");
  digitalWrite(7 , HIGH); //red
  digitalWrite(6, LOW);  //green

  delay (200); //adaptasi
  lcd.clear();
  delay(200);
  }

else{

  lcd.setCursor(0,0);
  lcd.print(" Gas No Detected ");
  digitalWrite(6, HIGH); //green
  digitalWrite(7 ,LOW); //red
  delay (200);
  }
  
//in aja asalnya
//delay(500);
//lcd.clear();
}


//coba nanti liat, kalo LCD fisik yang paling bagus yang mana
