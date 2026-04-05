int pot=A0;
int G;
int led=9;
  
void setup()
{
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  G=analogRead(pot);
  Serial.println(G);
  digitalWrite(led, HIGH);
  delay(G); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(G);
}