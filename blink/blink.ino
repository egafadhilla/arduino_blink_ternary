#define ledin 2
bool status = LOW;
unsigned long sekarang = 0;
unsigned int waktu = 500;

void setup() {
  pinMode(ledin, OUTPUT);
}

void loop() {
  status = (millis()-sekarang) >= waktu ? (sekarang = millis(), !status) : status;
  digitalWrite(ledin, status);
}
