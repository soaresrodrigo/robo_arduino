

void loop() {
int estado;
estado = digitalRead(sensor);

if (estado ==0) {
ir_pra_frente();
digitalWrite(pino_vermelhor, HIGH);
delay(500); 
}
else{
analogWrite(pino_verde, random(255));
delay(500);
}

}
