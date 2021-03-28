// define pin
const int pinSensor = 7;
const int pinLed = 2;


void setup() {
pinMode(pinSensor, INPUT);  //gangaruh kan input pull up atau bukan
pinMode(pinLed, OUTPUT);
}

 

void loop() {

if (digitalRead(pinSensor) == HIGH) {

  while (digitalRead(pinSensor) == HIGH) {}  //looping, sampai dilepas jarinya

  digitalWrite(pinLed, !digitalRead(pinLed));   //kebalikan dari pinLed, tapi digitalRead mantap
  }
delay(500);
}

//program sederhana sih, tapi mantep konsep buat nguncinyaa
//baru tau bisa di digitalRead
