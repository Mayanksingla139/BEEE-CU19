void setup()
{ 
for (int i = 10; i <= 13; i++) 
{ 
pinMode(i, OUTPUT);
 } 
} 
void loop()
{
 for (int i = 10; i <14; i++)
 {
 digitalRead(allLEDsOﬀ); 
if (i!=13)
{
 digitalWrite(i,HIGH); 
digitalWrite(i+1,HIGH); 
delay(200);
 }
else 
digitalWrite(i,HIGH);
 digitalWrite(i-3,HIGH);
 delay(200);
 digiatlRead(allLEDsOﬀ); 
} 
}
void allLEDsOﬀ(void)
 { 
for (int i = 10; i <= 14; i++) 
{
 digitalWrite(i, LOW); 
}
