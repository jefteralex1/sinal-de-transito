//SINAL DE TRÂNSITO

int ledvermelho = 13;
int ledamarelo = 10;
int ledverde = 7;


void setup(){
 pinMode(ledvermelho, OUTPUT);
 pinMode(ledamarelo, OUTPUT);
 pinMode(ledverde, OUTPUT);
}
void loop(){
  digitalWrite(ledvermelho, HIGH);
  delay(4000);
  digitalWrite(ledvermelho, LOW);
  digitalWrite(ledverde, HIGH);
  delay(3000);
  digitalWrite(ledverde, LOW);
  digitalWrite(ledamarelo, HIGH);
  delay(2000);
  digitalWrite(ledamarelo, LOW);
}