// =====================
//      Variáveis 
// ======================

//Motores

#define motor_a_p1 4;		// Motor A, rotação horária
#define motor_a_p2 5;		// Motor A, rotação antihorária
#define motor_b_p1 6;		// Motor B, rotação horária
#define motor_b_p2 7;		// Motor B, rotação antihorária

// ==========================
//      Métodos padrões 
// ===========================

void setup()
{
}

void loop()
{
}

// ==========================
//      Métodos motores 
// ===========================

// Referente ao robô

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


// Referente ao motor A 

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

// Referente ao motor B 

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


























