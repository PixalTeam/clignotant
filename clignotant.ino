void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  
  digitalWrite(4, LOW);
}

void loop() {
  boolean bouton = digitalRead(5);
  if (bouton == "HIGH") {
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    delay(500);
  } else {
    digitalWrite(4, LOW);
  }

}
