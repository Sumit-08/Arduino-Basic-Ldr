int ldrPin = A0;
int led = 10;

int ldrVal = 0;
void setup() {
Serial.begin(9600); 
pinMode (led, OUTPUT);
}
void loop() {
ldrVal = analogRead(ldrPin); 
if (ldrVal  <= 15)
{digitalWrite (led ,HIGH);
}else {digitalWrite (led, LOW);}

Serial.println(ldrVal); 
delay(10);

}
