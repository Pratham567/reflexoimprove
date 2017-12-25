
// int masterPin = 12;
int pinLedA = 2;
int pinLedB = 3;
int pinButtonA = 11;
int pinButtonB = 10;
int pinLedRed = 4;
int pinLedGreen = 5;
int val = 0;
int pinHigh = 12;
unsigned long StartTime;
unsigned long CurrentTime;
unsigned long ElapsedTime;
int number;



void setup() {
  
  // pinMode(masterPin,OUTPUT);
  pinMode(pinHigh,OUTPUT);
  pinMode(pinLedA,OUTPUT);
  pinMode(pinLedB,OUTPUT);
  pinMode(pinLedRed,OUTPUT);
  pinMode(pinLedGreen,OUTPUT);
  pinMode(pinButtonA,INPUT);
  pinMode(pinButtonA,INPUT);

//  digitalWrite(masterPin,HIGH);
//  delay(5000);
//  digitalWrite(masterPin,LOW);
digitalWrite(pinHigh,HIGH);
digitalWrite(pinLedA,HIGH);
  delay(2000);
  digitalWrite(pinLedA,LOW);
  delay(2000);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
 
  //number = random(1, 2);
  number = 1 ;
  if (number == 1)
{
  val = 0;
  //val = digitalRead(pinButtonA);
  StartTime = millis();
  // time starts;
  
  while(val==0)
    {
      digitalWrite(pinLedA,HIGH);

      CurrentTime = millis();
  ElapsedTime = CurrentTime - StartTime;

  if(ElapsedTime > 5000)
      break;

  if(digitalRead(pinButtonA))
    val = 1;
      
    }

  digitalWrite(pinLedA,LOW);
  delay(2000);
  
  Serial.print (ElapsedTime);
  
  if(ElapsedTime > 5000)
    {
      digitalWrite(pinLedRed,HIGH);            
    }
    else
    {
      digitalWrite(pinLedGreen,HIGH);
    }
  // if time greater than 1 sec then red light on.
}
 /* else
  {
    StartTime = millis();




  
  
    CurrentTime = millis();
    ElapsedTime = CurrentTime - StartTime;
    Serial.print (ElapsedTime);
  
    if(ElapsedTime > 1000)
      {
        digitalWrite(pinLedRed,HIGH);            
      }
    else
      {
      digitalWrite(pinLedGreen,HIGH);
      }
  
  }
*/


}

