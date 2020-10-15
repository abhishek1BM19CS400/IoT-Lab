int redLed = 13;
int smoke = A0;
void setup() 
{
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int analogSensor = analogRead(smoke);
  Serial.println(analogSensor);
  if(analogSensor >= 100)
  {
    digitalWrite(redLed, HIGH);
    Serial.println("SMOKE DETECTED");
  }
    else
    {
      digitalWrite(redLed, LOW);
      Serial.println("NO SMOKE DETECTED");
    }
      delay(1000);
}