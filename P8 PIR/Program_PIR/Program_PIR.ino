
// define pin
int pir = 2;

//define variable
int data;

void setup() {
// put your setup code here, to run once:
Serial.begin (9600);
pinMode (3, OUTPUT);
pinMode (5, OUTPUT);
pinMode (2, INPUT);
}

void loop() {

// put your main code here, to run repeatedly:

data = digitalRead (pir);
Serial.print ("Sensor PIR : ");
Serial.println (data);

if (data == 1) {
  digitalWrite (3, HIGH);
  digitalWrite (5, LOW);
  }

else {
  digitalWrite (3, LOW);
  digitalWrite (5, HIGH);
  }

}
