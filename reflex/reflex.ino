
int masterPin = 12;
int pinLedA = 2;
int PinLedB = 3;
int pinButtonA = 11;
int PinButtonB = 10;
int PinLedRed = 4;
int PinLedGreen = 5;
int val = 0;



void setup() {
  
  pinMode(masterPin,OUTPUT);
  pinMode(pinLedA,OUTPUT);
  pinMode(pinLedB,OUTPUT);
  pinMode(pinLedRed,OUTPUT);
  pinMode(pinLedGreen,OUTPUT);
  pinMode(pinButtonA,INPUT);
  pinMode(pinButtonA,INPUT);

  digitalWrite(masterPin,HIGH);
  delay(5000);
  digitalWrite(masterPin,LOW);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:

  number = random(1, 3);

// digitalWrite(2, HIGH);  
  if (number == 1)
{

  val = digitalRead(Pin2);
  delay(5000);
}

// else if (condition2)  {  // do Thing B }

else

{
  
  
  delay(5000);
}




}
