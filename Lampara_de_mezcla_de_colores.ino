const int PinLedVerde = 9;
const int PinLedRojo = 11;
const int PinLedAzul = 10;
const int PinEntradaLDR_Rojo = A0;
const int PinEntradaLDR_Verde = A1;
const int PinEntradaLDR_Azul = A2;
int ValorSensorRojo = 0;
int ValorSensorVerde = 0;
int ValorSensorAzul = 0;
int ValorRojo = 0;
int ValorVerde = 0;
int ValorAzul = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode (PinLedVerde, OUTPUT);
  pinMode (PinLedRojo, OUTPUT);
  pinMode (PinLedAzul, OUTPUT);
}

void loop() 
{
  ValorSensorRojo = analogRead(PinEntradaLDR_Rojo);
  delay(500);
  ValorSensorVerde = analogRead(PinEntradaLDR_Verde);
  delay(500);
  ValorSensorAzul = analogRead(PinEntradaLDR_Azul);
  Serial.print("Mapa de valores de los sensores / t Rojo: ");
  Serial.print(ValorSensorRojo);
  Serial.print("/ t Verde: ");
  Serial.print(ValorSensorVerde);
  Serial.print("/ t Azúl: ");
  Serial.print(ValorSensorAzul);
  ValorRojo = ValorSensorRojo / 4;
  ValorVerde = ValorSensorVerde / 4;
  ValorAzul = ValorSensorAzul /4;
  Serial.print("Mapa de valores de los sensores / t Rojo: ");
  Serial.print(ValorRojo);
  Serial.print("/ t Verde: ");
  Serial.print(ValorVerde);
  Serial.print("/ t Azúl: ");
  Serial.print(ValorAzul);
  analogWrite(PinLedRojo, ValorRojo);
  analogWrite(PinLedVerde, ValorVerde);
  analogWrite(PinLedAzul, ValorAzul);
}
