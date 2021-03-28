#include <LiquidCrystal.h>

 

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);


void setup() {
// set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

 

void loop (){

  // Print a message to the LCD.
  int ldr = analogRead(A1);
  
  lcd.setCursor(0,0);
  lcd.print("Light intensity");
  lcd.setCursor(0,1);
  lcd.print(ldr);
}
