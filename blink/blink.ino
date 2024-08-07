#define ledin 2

void setup() {
  pinMode(ledin, OUTPUT);
}

void loop() {
  blinking(500);
}

void blinking (unsigned int waktu){
  static bool status = LOW;
  static unsigned long sekarang = 0;
  status = (millis()-sekarang) >= waktu ? (sekarang = millis(), !status) : status;
  digitalWrite(ledin, status);
}
