// Constants
  const int trigPinLeft = 9; 
  const int echoPinLeft = 10;
  const int trigPinRight = 5;
  const int echoPinRight = 6;
  // constant for conversion
  const float speed_sound = .0343;
  // need to store time and distance
  float timeLeft, distanceLeft, timeRight, distanceRight;

void setup() {
  pinMode(trigPinLeft, OUTPUT); 
  pinMode(echoPinLeft, INPUT); 
  pinMode(trigPinRight, OUTPUT); 
  pinMode(echoPinRight, INPUT); 
  Serial.begin(9600);  
}

void loop() {
  // Sends 8 microsecond pulse for right 
  digitalWrite(trigPinRight, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPinRight, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigPinRight, LOW); 
  // Finds how long the echoPin is set to high for right
  timeRight = pulseIn(echoPinRight, HIGH); 
  distanceRight = (timeRight*.0343)/2; 

  delayMicroseconds(2);
  // Sends 8 microsecond pulse for left
  digitalWrite(trigPinLeft, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPinLeft, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigPinLeft, LOW); 

  // Finds how long the echoPin is set to high for left
  timeLeft = pulseIn(echoPinLeft, HIGH);
  distanceLeft = (timeLeft*.0343)/2;

  Serial.print("Distance (Right): ");
  Serial.println(distanceRight);
  Serial.print("Distance (Left): ");
  Serial.println(distanceLeft);
  delay(250);
}
