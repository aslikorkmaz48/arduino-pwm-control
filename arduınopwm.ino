long deger;

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  deger=analogRead(A0)/4;
  analogWrite(3,deger);
  Serial.println(deger);
  delay(100);
}