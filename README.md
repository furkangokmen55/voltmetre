# Voltmetre

ESP8266'nın analog (A0) pini üzerinden, 12V'a kadar gerilimi ölçebilmek için gerilim bölücü (voltage divider, oran ~3.63) kullanan basit bir voltmetre. Ölçülen değeri Seri Port'a (115200 baud) mV cinsinden yazdırır.

## Kullanım

`Voltmetre.ino` dosyasını kartına yükle, Seri Monitör'ü aç — her saniyede bir ölçüm gelir.

> Not: `voltageDividerRatio` değerini kendi direnç değerlerine göre ayarlaman gerekebilir.
