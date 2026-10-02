/* 1. TASK: ULTRASONIC SENSOR BASED LED BRIGHTNESS CONTROL
Objective:
Design and implement a circuit where the brightness of an LED is controlled based on the distance measured by an ultrasonic sensor. */

int led=7;
int trig=11;
int echo=10;
float dist; 
int duration;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2); // Wait for 1000 millisecond(s)
  digitalWrite(trig,HIGH);
 delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  dist=duration*0.034/2;
  int bright=map(dist,20,200,0,255);
  analogWrite(led,bright);
  
}