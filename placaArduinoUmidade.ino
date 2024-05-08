const int pinoUmidade = A0;

void setup() {
  Serial.begin(9600);
  pinMode(pinoUmidade, INPUT);
}

void loop() {
  int intUmidade = analogRead(pinoUmidade);
  double dbPercentualUmidade = ObterPercentualDeUmidade(intUmidade);

  if (dbPercentualUmidade < 15) {
      Serial.print("Pouca umidade: ");
  } else if ((dbPercentualUmidade > 15) && (dbPercentualUmidade < 50)) {
    Serial.print("Umidade normal: ");
  } else {
    Serial.print("Bastante úmido: ");
  }
    Serial.print(dbPercentualUmidade);
    Serial.println("%");
  delay(6000);
}

double ObterPercentualDeUmidade(int intUmidade) {
  double intDifUmidade = 0;
  double dbPercentualUmidade = 0;
  intDifUmidade = 1023 - intUmidade;
  dbPercentualUmidade = double(intDifUmidade) / 1023;
  dbPercentualUmidade = dbPercentualUmidade * 100;
  return dbPercentualUmidade;
}
