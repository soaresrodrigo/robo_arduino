int pinsensor = 7;
int led = 6;
int IN1 = 4;
int IN2 = 5;
int IN3 = 9;
int IN4 = 8;
  
void setup() {
pinMode(pinsensor, INPUT);
pinMode(led, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
}

void loop() {
  bool sensor = digitalRead(pinsensor);
if (sensor) {
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
delay(500);
}
  
}
 
