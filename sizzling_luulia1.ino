const int dct1= 6;
const int dct2 = 3;
const int sensor=4;
const int enable = 5;
int senosrRead;
void setup()
{
  pinMode(dct1, OUTPUT);
  pinMode(dct2, OUTPUT);
  pinMode(sensor,INPUT);
}

void loop()
{
  digitalWrite(sensor,HIGH);
  digitalWrite(enable,HIGH);
  senosrRead = digitalRead(sensor);
  if (senosrRead == LOW){
  	digitalWrite(dct1, HIGH);
  	digitalWrite(dct2, LOW);
  }
  else if(senosrRead == HIGH){
  	digitalWrite(dct1, LOW);
  	digitalWrite(dct2, LOW);
  }
}