void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  Serial.println("LED ON");
  delay(2000); // Wait for 1000 millisecond(s)
  
  digitalWrite(13,LOW); 
  Serial.println("LED OFF");
  delay(2000); // Wait for 1000 millisecond(s)
}