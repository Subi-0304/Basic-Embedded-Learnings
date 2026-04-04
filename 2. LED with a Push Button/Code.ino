int T=0;

void setup()
{
pinMode(2, INPUT);
pinMode(10, OUTPUT);
}

void loop ()
{
T=digitalRead(2);
if (T==HIGH)
{
digitalWrite(10, HIGH);
}
else{
digitalWrite(10, LOW);
}
delay(15);
}
