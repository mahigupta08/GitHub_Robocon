/* 2. TASK: TWO LEDs WITH POTENTIOMETER
Objective:
Control the brightness of two LEDs using a potentiometer.
Expected:
Potentiometer LOW → LED 1 OFF/LOW, LED 2 HIGH
Potentiometer HIGH → LED 1 HIGH, LED 2 OFF/LOW */

int led1=2;
int led2=3;
int pot=A2;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ int val=analogRead(pot);
  int br1=map(val,0,1023,0,255);
 int br2=map(val,0,1023,255,0);//int br2=255-br1;
 analogWrite(led1,br1);
 analogWrite(led2,br2);
  
  
}


