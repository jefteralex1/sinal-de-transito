//SINAL DE TRÂNSITO

// Definição dos pinos dos LEDs
int ledvermelho = 13;  // Pino para o LED vermelho
int ledamarelo = 10;   // Pino para o LED amarelo
int ledverde = 7;      // Pino para o LED verde

// Função setup() é executada uma vez quando o Arduino é inicializado
void setup(){
  // Configura os pinos dos LEDs como saída
  pinMode(ledvermelho, OUTPUT);  // Define o pino como saída para o LED vermelho
  pinMode(ledamarelo, OUTPUT);   // Define o pino como saída para o LED amarelo
  pinMode(ledverde, OUTPUT);     // Define o pino como saída para o LED verde
}

// Função loop() é executada repetidamente após a função setup()
void loop(){
  // Acende o LED vermelho
  digitalWrite(ledvermelho, HIGH);
  // Aguarda 4 segundos
  delay(4000);
  // Apaga o LED vermelho
  digitalWrite(ledvermelho, LOW);
  
  // Acende o LED verde
  digitalWrite(ledverde, HIGH);
  // Aguarda 3 segundos
  delay(3000);
  // Apaga o LED verde
  digitalWrite(ledverde, LOW);
  
  // Acende o LED amarelo
  digitalWrite(ledamarelo, HIGH);
  // Aguarda 2 segundos
  delay(2000);
  // Apaga o LED amarelo
  digitalWrite(ledamarelo, LOW);
}
