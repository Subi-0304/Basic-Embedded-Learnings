int ldrsensor = 0;

void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop()
{
  ldrsensor = analogRead(A0);
  Serial.println(ldrsensor);
  if (ldrsensor < 500) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  delay(10); 
}