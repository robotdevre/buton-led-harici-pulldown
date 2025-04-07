# buton-led-harici-pulldown ![Wokwi CI](https://github.com/robotdevre/buton-led-harici-pulldown/actions/workflows/wokwi.yml/badge.svg)

Bu proje, Arduino Uno kartı ile harici **pull-down** direnç kullanılarak bir buton yardımıyla LED kontrolünü sağlar. Butona basıldığında giriş pini HIGH olur ve LED yanar. `INPUT_PULLUP` yerine dışarıdan bir direnç ile referans voltaj sağlanmıştır. Temel giriş/çıkış sistemlerini anlamak için ideal bir başlangıç projesidir.

---

## 🔧 Kullanılan Malzemeler

- Arduino Uno  
- 1 x LED (Kırmızı)  
- 1 x 220 Ohm direnç (LED için)  
- 1 x 10k Ohm direnç (Buton için - harici pull-down)  
- 1 x Buton  
- Jumper kablolar  

---

## 🎯 Proje Amacı

- `digitalRead()` fonksiyonu ile dijital giriş okuma  
- Harici **pull-down** direnci ile pinin doğru şekilde LOW kalmasını sağlama  
- Butona basıldığında LED’in yakılması  
- Temel elektronik devre mantığını kavrama  

---

## 📷 Devre Şeması

📁 `diagram.json` dosyasında Wokwi uyumlu devre şeması yer almaktadır.  
🔗 [Projeyi Wokwi'de görmek için tıklayın](https://wokwi.com/projects/426613315916878849)

---

## 💡 Kod

```cpp
const int buttonPin = 7;
const int ledPin = 13;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT); // Harici pull-down direnci kullanıyoruz
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) { // Butona basıldığında pin HIGH olur
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
``` 
---

## 📫 Benimle İletişime Geç / Takip Et

Eğer proje hakkında bir fikrin varsa, soruların olursa ya da sadece selam vermek istersen; aşağıdaki kanallardan bana ulaşabilir ya da sosyal medya hesaplarımdan takip edebilirsin:

- 📧 [E-posta](mailto:info@robotdevre.com)  
- 📷 [Instagram](https://www.instagram.com/robotdevre/)  
- 🌐 [Web Sitesi](https://robotdevre.com/)  
- 🎥 [YouTube](https://www.youtube.com/@robotdevre)  
- 💼 [LinkedIn](https://www.linkedin.com/in/ugur-kerim-sirke/)  
- 🐦 [X (Twitter)](https://x.com/robotdevre)
