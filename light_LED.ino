
 #define BUTTON_PIN 32   // 버튼 
#define LED_PIN 13     // LED

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int 버튼상태 = digitalRead(BUTTON_PIN);

  if (버튼상태 == LOW)   
    digitalWrite(LED_PIN, LOW); 
  else 
    digitalWrite(LED_PIN, HIGH); 
}
