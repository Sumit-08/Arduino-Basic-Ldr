int ldrPin = A0;
int led = 10;

int ldrVal = 0;
void setup() {
Serial.begin(9600); 
pinMode (led, OUTPUT);
}
void loop() {
ldrVal = analogRead(ldrPin); 
if (ldrVal  <= 200)
{digitalWrite (led ,LOW);
}else {digitalWrite (led, HIGH);}

Serial.println(ldrVal); 
delay(10);

}
