int EN1=5;
int motor6=6;
int motor7=7;

int EN2=10;
int motor9=9;
int motor8=8;

void setup() {
Serial.begin(9600);
  
for(int x=5;x<=10;x++){

pinMode(x,OUTPUT);
}

}
void loop() {
 if( Serial.available()>0){
char sr=Serial.read();
  switch(sr){
  case 'F':
digitalWrite(motor6,1);
digitalWrite(motor7,0);
analogWrite(EN1,127);
Serial.println("F");
 digitalWrite(motor8,1);
 digitalWrite(motor9,0);
 analogWrite(EN2,127);
 break;
 case 'R':
 digitalWrite(motor6,0);
digitalWrite(motor7,0);
analogWrite(EN1,127);
Serial.println("R");
 digitalWrite(motor8,1);
 digitalWrite(motor9,0);
 analogWrite(EN2,127);
 break;
 case 'L':
 digitalWrite(motor6,1);
digitalWrite(motor7,0);
analogWrite(EN1,127);
Serial.println("L");
 digitalWrite(motor8,0);
 digitalWrite(motor9,0);
 analogWrite(EN2,127);
 break;
  case 'B':
 digitalWrite(motor6,0);
digitalWrite(motor7,1);
analogWrite(EN1,127);
Serial.println("B");
 digitalWrite(motor8,0);
 digitalWrite(motor9,1);
 analogWrite(EN2,127);
 break;
  case 'S':
 digitalWrite(motor6,0);
digitalWrite(motor7,0);
analogWrite(EN1,127);
Serial.println("S");
 digitalWrite(motor8,0);
 digitalWrite(motor9,0);
 analogWrite(EN2,127);
 break;
  }
}}