int buzzerPin = 13;
int motorPin = 9;
int pirPin = 5;
int deger = 0;
int buton =2;
int butonDurum=0;

void setup() {
pinMode(pirPin, INPUT); 
pinMode(buzzerPin, OUTPUT);
pinMode(motorPin, OUTPUT);  
pinMode(buton, INPUT);
Serial.begin(9600); 

}

void loop() {
deger=digitalRead(pirPin); 
butonDurum=digitalRead(buton);
Serial.println(deger);
if(deger==HIGH) {
analogWrite(motorPin, 200); 
digitalWrite(buzzerPin, HIGH);
delay(2000);
digitalWrite(buzzerPin, LOW); 
delay(1000);
digitalWrite(buzzerPin,HIGH);
delay(2000); 
digitalWrite(buzzerPin,LOW);
delay(1000);
}
if(butonDurum==HIGH){
analogWrite(motorPin, 0); 
digitalWrite(buzzerPin, LOW);
}
}
