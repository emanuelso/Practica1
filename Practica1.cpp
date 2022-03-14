#define LED 16

void setup(){
    Serial.begin(9600);
    pinMode(LED,OUTPUT);
}

void loop(){
    digitalWrite(LED,HIGH);
    Serial.println("ON");
    delay(1500);
    digitalWrite(LED,LOW);
    Serial.println("OFF");
}