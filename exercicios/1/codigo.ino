void setup()
{
  pinMode(3, OUTPUT);
}
void loop()
{
  digitalWrite(3, HIGH);
  delay(500); // meio segundo
  digitalWrite(3, LOW);
  delay(500); // meio segundo
}
