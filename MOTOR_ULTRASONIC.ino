int trigPin=4;
int echoPin=5;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(2);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(2);
  digitalWrite(trigPin,LOW);
  delay(2);
  digitalWrite(trigPin,HIGH);
  delay(2);
  digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH); 
distance=duration*0.034/2;
Serial.println(distance);
if (distance<=20)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
delay(20);
digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(20);
 }
}
