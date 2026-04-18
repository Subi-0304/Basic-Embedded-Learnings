int gassensor = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  gassensor = analogRead(A0);
  Serial.println(gassensor);
  if (gassensor >= 500) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  if (gassensor >= 650) {
    tone(7, 523, 100);
  } else {
    digitalWrite(7, LOW);
  }
  delay(10); 
}