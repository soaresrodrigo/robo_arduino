// Variáveis

//Motores
int motor_a_p1 = 4;
int motor_a_p2 = 5;

int motor_b_p1 = 6;
int motor_b_p2 = 7;

// Funções principais pros motores

void ir_pra_frente(){
	frente_motor_a();
	frente_motor_b();
}

void ir_pra_tras(){
	re_motor_a();
	re_motor_b();
}

void frear(){
	freio_motor_a();
	freio_motor_b();
}

void virar_direita(){
	frente_motor_a();
	re_motor_b();
}

void virar_esquerda(){
	re_motor_a();
	frente_motor_b();
}



//Subfunções

// Referente ao motor A =======================

void frente_motor_a(){
	digitalWrite(motor_a_p1, HIGH);
	digitalWrite(motor_a_p2, LOW);
}

void freio_motor_a(){
	digitalWrite(motor_a_p1, HIGH);
	digitalWrite(motor_a_p2, HIGH);
}

void re_motor_a(){
	digitalWrite(motor_a_p1, LOW);
	digitalWrite(motor_a_p2, HIGH);
}

// Referente ao motor B ==============================

void frente_motor_b(){
	digitalWrite(motor_b_p1, HIGH);
	digitalWrite(motor_b_p2, LOW);
}

void freio_motor_b(){
	digitalWrite(motor_b_p1, HIGH);
	digitalWrite(motor_b_p2, HIGH);
}

void re_motor_b(){
	digitalWrite(motor_b_p1, LOW);
	digitalWrite(motor_b_p2, HIGH);
}

