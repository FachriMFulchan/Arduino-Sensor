#include <LiquidCrystal.h>

//define variable
int ThermistorPin = 0;
float Vo;
float R1 = 10000, R = 10000, To = 25, B = 3900;
float R2, T, Tf;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

 

void setup() {
  Serial.begin(9600);
}

 

void loop() {

  Vo = analogRead(ThermistorPin);

  R2 = 1023 / Vo - 1 ;

  R2 = R / R2;

  T = R2 / R1;

  T = log(T);

  T /= B;

  T += 1.0 / (To + 273.15);

  T = 1.0 / T;

  T -= 273.15;

  T = -0.979 * T + 49.196;


  lcd.print("Suhu: ");
  lcd.print(T);
  lcd.print(" C; ");
  
  delay(500);
  lcd.clear();

//  Serial.print("R2: ");
//  Serial.print (R2);
//  Serial.print (" Vo : ");
//  Serial.println (Vo);
}
