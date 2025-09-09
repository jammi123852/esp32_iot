#define LED_PIN 13
unsigned long 이전시간 = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  unsigned long 현재시간 = millis();

  if (현재시간 - 이전시간 >= 1000) {
    이전시간 = 현재시간;            
    digitalWrite(LED_PIN, !digitalRead(LED_PIN)); 
  }
}
