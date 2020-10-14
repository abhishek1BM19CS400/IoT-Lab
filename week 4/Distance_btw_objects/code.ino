float cm;
float inches;
float pulse;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  pinMode(7,INPUT);
  pulse = pulseIn(7,HIGH);
  inches = pulse/147;
  cm = inches * 2.54;
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(500); 
}