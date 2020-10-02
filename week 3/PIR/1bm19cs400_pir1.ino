int led = 13;
int sensor = 2;
int state = LOW;
int sensorState = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}
void loop()
{
  // read the state of the sensor/digital input
  sensorState = digitalRead(sensor);
  // check if sensor pin is HIGH. if it is, set the
  // LED on.
  if (sensorState == HIGH) {
    digitalWrite(led, HIGH);
    delay(10);
   
    if(state == LOW){
    Serial.println("Sensor activated!");
      state = HIGH;
    }
  } else {
    digitalWrite(led, LOW);
    delay(10);
    
    if(state == HIGH){
      Serial.println("Sensor deactivated!");
      state = LOW;
    }
  }
   // Delay a little bit to improve simulation performance
}