float temperatura;
int pinRele = 53;
int pinEstado = 4;
bool estado = false;
int transistorPin = 13;


void setup() {
  pinMode(pinRele, OUTPUT);
  pinMode(pinEstado, INPUT);
  pinMode(transistorPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int lectura = analogRead(A1);
  temperatura = (lectura * 5.0) / 1023.0 * 100.0;
  Serial.println("Temperatura: " + String(temperatura) + "grados Celsius");
    
  if (temperatura >= 28) {
    analogWrite(transistorPin, pwmMotor(temperatura));
    digitalWrite(pinRele, LOW);
  }
  else {
    //analogWrite(transistorPin, pwmMotor(temperatura));   
    digitalWrite(pinRele, HIGH); 
  }

  /*else if (temperatura <= 28) {
    analogWrite(transistorPin, pwmMotor(temperatura));   
    digitalWrite(pinRele, HIGH);
  }*/
  
  delay(100); // Espera 1 segundo
  
}

int pwmMotor (float temperatura) {
  float pwm = (18.2 * temperatura) - (18.2 * 26);
  int result = round(pwm);
  Serial.println(String(result));

  return result;
}

int pwmBombillo (float temperatura) {
  float pwm = (-17 * temperatura) + 476;
  int result = round(pwm);
  Serial.println(String(result));

  return result;
}