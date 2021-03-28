



void setup() {
  Serial.begin(9600);
  delay(100);

  Serial.println("Welcome to Kosan Cerdas\n");
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);

}

 

void loop() {
  delay(100);
  Serial.println("");

 
  if(digitalRead(A0)==0)
  {
  digitalWrite(13,HIGH);
  Serial.print("halangan");
  }

  else{
    digitalWrite(13,LOW);
    Serial.print("kosong");
  }
}
