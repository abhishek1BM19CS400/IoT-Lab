int outputpin=0;
void setup()
{  Serial.begin(9600);
  
}

void loop()
{ int rawvoltage=analogRead(outputpin);
  float millivolts=(rawvoltage/1240.0)*5000;
  float celcius=millivolts/10;
  Serial.print(celcius);
  Serial.print("\ncelcius ");
  Serial.print((celcius*9)/5 + 32);
  Serial.print("\nFahrenheit  ");
  delay(1000);

}