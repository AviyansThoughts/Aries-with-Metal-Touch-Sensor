// Welcome to Aviyan's Thoughts

int digitalPin = 3;   // KY-036 digital interface
int analogPin = A0;   // KY-036 analog interface
int digitalVal;       // digital readings
int analogVal;        // analog readings

void setup()
{
  pinMode(digitalPin,INPUT); 
  pinMode(analogPin, INPUT);     
  Serial.begin(9600);
}

void loop()
{
  // Read the digital inteface
  digitalVal = digitalRead(digitalPin); 
  
  if(digitalVal == HIGH) 
  {
    Serial.println ("Touched");
  }
  else
  {
    Serial.println ("Not Touched");
  }

  // Read analog interface
  analogVal = analogRead(analogPin);
  Serial.println(analogVal);  // Print analog value to serial

  delay(1000);
}