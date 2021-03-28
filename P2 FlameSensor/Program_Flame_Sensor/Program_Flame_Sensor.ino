//Import LCD Library
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

//variable 
#define FlamePin A0
const int buzzer = 1;


void setup() {
  //define pin
  lcd.begin(16, 2);
  pinMode(FlamePin, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);

  //pertama kali menyala
  lcd.setCursor(5, 0);
  lcd.print("FLAME");
  lcd.setCursor(4, 1);
  lcd.print("SENSOR");
  delay(1000);
  lcd.clear();
}

void loop() {
int Flame = digitalRead(FlamePin);

if (Flame==HIGH) {
  digitalWrite(buzzer, HIGH);
  lcd.setCursor(6, 0);
  lcd.print("API");
  lcd.setCursor(3, 1);
  lcd.print("TERDETEKSI");
  
  delay(200);
  lcd.clear();
  delay(200);
  }


else {
  digitalWrite(buzzer, LOW); 
  lcd.setCursor(6, 0);
  lcd.print("AMAN");
  delay(200);
  }
  
}
