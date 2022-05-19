// C++ code
//
#define m1 2
#define m2 3
void setup()
{
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
}

void loop()
{
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  delay(1000); 
}