// =====================
//      Variáveis 
// ======================

//Motores

#define motor_a_p1 4;		// Motor A, rotação horária
#define motor_a_p2 5;		// Motor A, rotação antihorária
#define motor_b_p1 6;		// Motor B, rotação horária
#define motor_b_p2 7;		// Motor B, rotação antihorária
<<<<<<< HEAD
#define led_vermelha 8;        
#define led_verde 9;
=======

//Sensores

#define sensor_de_linha_frente 4;		// Sensor de linha da frente
#define sensor_de_linha_atras 4;		// Sensor de linha de trás
#define sensor_lado_direito 10                   //Sensor lateral direito
#define sensor_lado_esquerdo 11                  //Sensor lateral esquerdo
 


>>>>>>> 562a66f1897928271f958c78e343b18f0f883cb1
// ==========================
//      Métodos padrões 
// ===========================

void setup(){
	pinosMotores();
	pinosSensoresDeLinha();
}

void loop(){
	afastaDaLinha();
        atacar ao lado direito();
        atacar ao lado esquerdo();
}

// ==========================
//      Métodos sensores 
// ===========================

void pinosSensoresDeLinha(){
	pinMode(sensor_de_linha_frente, INPUT);
	pinMode(sensor_de_linha_atras, INPUT);
}

void afastaDaLinha(){
	bool sensor_frente = digitalRead(sensor_de_linha_frente);
	bool sensor_atras = digitalRead(sensor_de_linha_atras);
	
	if(sensor_frente){
		frear();
		virar_direita();
	}
	
	if(sensor_atras){
		ir_pra_frente();
	}
}

// ==========================
//      Métodos motores 
// ===========================

void pinosMotores(){
	pinMode(motor_a_p1, OUTPUT);
	pinMode(motor_a_p2, OUTPUT);
	pinMode(motor_b_p1, OUTPUT);
	pinMode(motor_b_p2, OUTPUT);
}

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

// ==========================
//      Método para defesa laterais
// ==========================


void defesa do lado direito (){             //Defender o lado direito girando
	pinMode(sensor_lado_direito, INPUT);
	
}
void atacar ao lado direito(){
	bool sensor_direito = digitalRead(sensor_lado_direito);
	
	if(sensor_direito){
		virar_direita();
	}
	
	
	
void defesa do lado esquerdo (){              //Defender o lado esquerdo girando
	pinMode(sensor_lado_esquerdo, INPUT);
	
}
void atacar ao lado esquerdo(){
	bool sensor_esquerdo = digitalRead(sensor_lado_esquerdo);
	
	if(sensor_esquerdo){
		virar_esquerdo();
	}
	




// ==========================
//      Método para ataque 
// ==========================

int estado;
estado = digitalRead(sensor);

if (estado ==0) {
ir_pra_frente();
digitalWrite(led_vermelhor, HIGH);
; 
}
else{
analogWrite(led_verde, HIGH);

}

















