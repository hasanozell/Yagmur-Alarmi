int esikDegeri = 10; // Değer isteğe göre değiştirilebilir.

int sensorPin = A0;
int buzzerPin = 8;

int veri;

void setup() {
  pinMode(buzzerPin,OUTPUT);
}

void loop() {
  
  veri = analogRead(sensorPin);

  if( veri > esikDegeri){
    digitalWrite(buzzerPin, HIGH);
    delay(100); // bekleme süresi isteğe göre ayarlanabilir.
    digitalWrite(buzzerPin, LOW);
    delay(100); 
  }
  else {
    digitalWrite(sensorPin, LOW);
  }
  

}