int sensor = 2;
int pino_vermelho = 8;
int pino_verde = 9;

void setup() {
  
pinMode (sensor, INPUT);
pinMode(pino_vermelho, OUTPUT);
pinMode(pino_verde, OUTPUT);
}

void loop() {
sensor = digitalRead(2);
 
  if (buttonState == HIGH) {
    
 digitalWrite(8, HIGH);
 digitalWrite(9, LOW);
    
  } else {
    
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
  }
  delay(10); 
}

}
