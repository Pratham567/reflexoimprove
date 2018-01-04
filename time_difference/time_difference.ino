void setup(){}


void loop()
  {
   unsigned long StartTime = millis();

delay(5000);

unsigned long CurrentTime = millis();
unsigned long ElapsedTime = CurrentTime - StartTime;
Serial.print (ElapsedTime);
  }

