const int analogPin = A0;          // ESP8266'nın ADC pini (A0)
const float referenceVoltage = 3.3; // ESP8266'nin referans voltajı
const int resolution = 1023;       // ADC çözünürlüğü (10-bit)
const float voltageDividerRatio = 3.63; // Gerilim bölücü oranı (12V -> 3.3V)

void setup() {
  Serial.begin(115200); // Seri haberleşme başlat
}

void loop() {
  int analogValue = analogRead(analogPin); // ADC'den okuma yap
  // Gerilim hesaplama
  float voltage = (analogValue * referenceVoltage / resolution) * voltageDividerRatio * 1000;

  Serial.print("Measured Voltage: ");
  Serial.print(voltage, 2); // Ölçülen voltaj (2 ondalık basamak)
  Serial.println(" mV");

  delay(1000); // 1 saniye bekle
}
