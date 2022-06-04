void setup()
{
pinMode(10, INPUT);
pinMode(11, INPUT);
Serial.begin(9600);
}
void loop()
{
if((digitalRead(10) == 1)||(digitalRead(11) == 1))
{
Serial.println("ECG MONITOR IS NOT CONNECTED");
delay(100) ;
}
else
{
Serial.println(analogRead(A0));
}
delay(500);
}
