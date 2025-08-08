# Arduino PWM Kontrol Projesi

Bu proje, Arduino ile analog girişten (potansiyometre) alınan değeri PWM çıkışına dönüştürerek LED parlaklığı veya motor hızını kontrol etmeyi amaçlamaktadır. Tinkercad platformu üzerinde simüle edilmiştir.

## Kullanılan Malzemeler
- Arduino UNO
- Potansiyometre (10kΩ)
- LED
- 220Ω direnç
- Bağlantı kabloları
- Breadboard

## Devre Bağlantıları
- Potansiyometrenin orta bacağı Arduino'nun A0 pinine bağlanır.
- Diğer bacaklar 5V ve GND'ye bağlanır.
- PWM çıkışı için Arduino'nun 3 numaralı pini bir LED ve seri bağlı 220Ω direnç üzerinden GND'ye bağlanır.

## Kod Açıklaması
- `analogRead(A0)` ile potansiyometreden gelen 0-1023 arası analog değer okunur.
- PWM sinyali 0-255 arasında olduğu için bu değer 4'e bölünür.
- `analogWrite(3, deger)` ile PWM sinyali 3 numaralı pine uygulanır.
- Seri monitörde değerler görüntülenir.

## Kullanım
1. Arduino IDE ile `arduino_pwm.ino` dosyasını açın.
2. Kodunuzu Arduino'ya yükleyin.
3. Potansiyometreyi çevirerek LED parlaklığını gözlemleyin.
4. Seri monitörde değerleri takip edebilirsiniz.

## Lisans
Bu proje MIT Lisansı ile lisanslanmıştır.

---

Projeye katkıda bulunmak veya sorularınız için lütfen [GitHub Issues](https://github.com/aslikorkmaz48/arduino-pwm-control/issues) bölümünü kullanın.

