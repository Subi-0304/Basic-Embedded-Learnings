#include <Servo.h>
Servo S1;
int pot = A0;
int x;
int value;


void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  S1.attach (9);
}

void loop()
{
  x=analogRead(pot);
  Serial.println(x);
  value=map (x,0,1023,0,180);
  S1.write(value);
  
}
