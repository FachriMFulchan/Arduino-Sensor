int led = 6; //Inisialisasi pin 6
int pinPot = A0; //Inisialisasi pin 0
int potVal = 0; //variabel untuk menyimpan nilai analog dari pin A0

 

void setup()
{
  pinMode(led, OUTPUT); //pin 6 sebagai output
  Serial.begin (9600);
}

 

void loop(){
  potVal = analogRead(pinPot); //menyimpan nilai dari pin A0

 //konversi rentang data digital dari 0-1023 (10bit) ke 0-255
 potVal = map(potVal, 0, 1023, 0, 255);

 analogWrite(led, potVal); //kirim tegangan analog ke pin6

 Serial.println(potVal);
}
