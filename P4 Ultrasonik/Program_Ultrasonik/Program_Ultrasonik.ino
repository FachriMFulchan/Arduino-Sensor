//ULTRASONIC SENSOR


// define pin
const int ECHO = 2; // Echo pin of Ultrasonic Sensor
const int TRIG = 3; // Trigger

// define variable
int durasi;   //durasi dari sonar dipancarkan sampai kembali
int jarak;    //jarak yang didapat


int baca_jarak() {
digitalWrite (TRIG, HIGH);
delayMicroseconds (10);
digitalWrite (TRIG, LOW);

durasi = pulseIn (ECHO, HIGH);
jarak = durasi*0.034/2;

return jarak;
}




void setup() {
  // put your setup code here, to run once:
pinMode (TRIG, OUTPUT);
pinMode (ECHO, INPUT);
digitalWrite (TRIG, LOW);
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(baca_jarak());
Serial.println(" cm");

}


/*
PENJELASAN PROGRAM

1) 
digitalWrite (TRIG, HIGH);
delayMicroseconds (10);
digitalWrite (TRIG, LOW);

dalam satu looping, sinyal hanya memiliki panjang gelombang sekitar 10 microsecond 



2) 
durasi = pulseIn (ECHO, HIGH);

durasi adalah berapa lama sinyal dari mulai dipancarkan oleh sensor
kemudian kembali lagi ke sensor karena terpental oleh benda di depannya

3) 
jarak = durasi*0.034/2;

ini merupakan konversi durasi ke jarak

Kecepatan suara berkisar sebesar 343 meter/detik
dengan disesuaikan dengan satuan yang kita pakai di program ini maka
meter diubah ke centimeter, dan detik diubah ke microsecond


343 m/detik = 0.0343 cm/microsecond

kemudian dibagi 2 karena sinyal mengalami 2 balikan
(saat dipancarkan sensor & saat mengenai benda lalu memantul ke sensor)
 */
