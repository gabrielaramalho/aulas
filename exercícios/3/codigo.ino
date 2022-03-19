void setup()
{
  pinMode(2, OUTPUT);//led verde
  pinMode(3, OUTPUT);//led vermelho
  pinMode(4, OUTPUT);//led laranja
  pinMode(5, OUTPUT);//led azul
  pinMode(6, OUTPUT);//led branco
}
void loop()
{
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(3, HIGH);
  delay(2000); 
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(2000);
}
