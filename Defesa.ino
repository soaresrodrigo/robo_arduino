// Código de defesa

int sensor_defesa = 1;

void setup(){
	pinMode(sensor_defesa, INPUT_PULLUP);
}

void defende(){
	while(digitalRead(sensor_defesa) == LOW){
		ir_pra_frente();		
	}

}
