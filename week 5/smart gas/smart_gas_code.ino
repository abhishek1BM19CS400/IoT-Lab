int motorpin=3;
int sensorpin=A1;
int threshold=400;

void setup(){
  pinMode(motorpin, OUTPUT);
  Serial.begin(9600);
  }

 void loop(){
  int sensorvalue=analogRead(sensorpin);
  Serial.println(sensorvalue);
  if(sensorvalue>threshold){
    digitalWrite(motorpin, HIGH);
    }
  else{
    digitalWrite(motorpin, LOW);
    }
  }