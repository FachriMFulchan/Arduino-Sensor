// define pin
int vs = 3;
int led= 13;
int val;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(vs,INPUT);
pinMode(led,OUTPUT);
}

 

void loop() {
  // put your main code here, to run repeatedly:

val = digitalRead(vs);


if(val==1) {
  Serial.println("Vibration Sensor Active");
  digitalWrite(led,HIGH);
  }
  
else{
  Serial.println("Vibration Sensor not Active");
  digitalWrite(led,LOW);
  }

delay(100);
}
