
// int masterPin = 12;
int pinLedA = 2;
int pinLedB = 3;
int pinButtonA = 11;
int pinButtonB = 10;
int pinLedRed = 4;
int pinLedGreen = 5;
int buttonState;
int lastButtonState = LOW;
int pinHigh = 12;
unsigned long StartTime;
unsigned long CurrentTime;
unsigned long ElapsedTime;
int number;
int reading;
int val;
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers




void setup() {

  
  Serial.begin(9600);
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
digitalWrite(pinLedB,HIGH);
  delay(2000);
  digitalWrite(pinLedA,LOW);
  digitalWrite(pinLedB,LOW);
  delay(2000);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(pinLedRed,LOW );
    digitalWrite(pinLedGreen,LOW);
    digitalWrite(pinLedA,LOW);
    digitalWrite(pinLedB,LOW);
   number = random(1, 3);
 
  if (number == 1)
{
  val = HIGH;
 
  StartTime = millis();
  // time starts for checking reaction;
  
  while(val)
    {
      digitalWrite(pinLedA,HIGH);

      
    // Debouncing the push button
    if(digitalRead(pinButtonA))
      {  lastDebounceTime = millis();
      
      while(digitalRead(pinButtonA))
          {
               if((millis() - lastDebounceTime) > debounceDelay)
                  {
                    val = LOW;
                    break;
                  }
                
          }
      }
      CurrentTime = millis();  
      //Final timme for checking reaction;
      
       ElapsedTime = CurrentTime - StartTime;

      if(ElapsedTime > 5000)    break;
    
    }

    digitalWrite(pinLedA,LOW);

     Serial.print(ElapsedTime);
  

  
}
 
  
else
  {
     val = HIGH;
 
  StartTime = millis();
  // time starts for checking reaction;
  
  while(val)
    {
      digitalWrite(pinLedB,HIGH);

      
    // Debouncing the push button
    if(digitalRead(pinButtonB))
      {  lastDebounceTime = millis();
      
      while(digitalRead(pinButtonB))
          {
               if((millis() - lastDebounceTime) > 50)
                  {
                    val = LOW;
                    break;
                  }
                
          }
      }
      CurrentTime = millis();  
      //Final timme for checking reaction;
      
       ElapsedTime = CurrentTime - StartTime;

      if(ElapsedTime > 5000)    break;
    
    }


    digitalWrite(pinLedB,LOW);
    
    Serial.print(ElapsedTime);
  

  
  }


    
    
  // if time greater than 3 sec then red light on.
  if(ElapsedTime > 3000)
    {
      digitalWrite(pinLedRed,HIGH);            
    }
    else
    {
      digitalWrite(pinLedGreen,HIGH);
    }  

    delay(1500);
}

