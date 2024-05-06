const int pinoUmidade = A0;

void setup() {
  Serial.begin(9600);
  pinMode(pinoUmidade, INPUT);
}

void loop() {
  if(pinoUmidade > 500){
  Serial.println("Muito seco: " + analogRead(pinoUmidade));
  }
  else (pinoUmidade < 500) && (pinoUmidade < 400){
      Serial.println("Umidade normal: " + analogRead(pinoUmidade));
  }
  else{
          Serial.println("Bastante úmido: " + analogRead(pinoUmidade));
  }

  delay(1000);
}
