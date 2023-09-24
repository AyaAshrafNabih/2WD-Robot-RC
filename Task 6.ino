// C++ code
//
int IN1 =12;
int IN2 =8;
int IN3 =2;
int IN4 =13;
int ENA = 9;
int ENB  = 3;
char Reading;
void setup()
{
  Serial.begin (9600);
for(int i=5 ; i<=13 ; i++)
{
pinMode(i, OUTPUT);
}
}
  void forword()
{
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite( ENA ,150);
analogWrite( ENB ,150);
}
void backword()
{
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
analogWrite(ENA,150);
analogWrite(ENB,150);
}
  void left()
{
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite(ENA,0);
analogWrite(ENB,150);
}
void right()
{
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
analogWrite(ENA,150);
analogWrite(ENB,0);
}
  void stopp() {
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
analogWrite(ENA,0);
analogWrite(ENB,0); }
void loop() {
  
if(Serial.available()>0){
  
Reading=Serial.read();
  
switch(Reading){
  
 case 'F': forword(); break;
 case 'B': backword(); break;
 case 'R': right(); break;
 case 'L' : left(); break;
 case 'S' :stopp(); break;
}
}
}