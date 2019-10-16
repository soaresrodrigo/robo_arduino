int sensor = 2;
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int pino_verde = 9;

void setup() {
pinMode (sensor, INPUT);
pinMode(pino_verde, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
}

void loop() {
int estado;
estado = digitalRead(sensor);

if (estado ==0) {
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
delay(500); 
}
else{
analogWrite(pino_verde, random(255));
delay(500);
}

}
