# 🌱 Otomatik Bitki Sulama Sistemi

Bu proje, Çukurova Üniversitesi Kozan MYO Bilgisayar Programcılığı bölümü "Yönlendirilmiş Çalışma" dersi kapsamında geliştirilmiştir. Toprak nem sensörü kullanarak bitkinin su ihtiyacını algılar ve otomatik olarak sulama yapar.

## 👥 Proje Ekibi (Grup 6)
* **Adı Soyadı:** Eyüp IŞIK
* **Numara:** 2024688036
* **Ders:** BL271 - Yönlendirilmiş Çalışma

## 🛠 Kullanılan Malzemeler
* Arduino Uno (R3)
* Toprak Nem Sensörü
* 5V Tekli Röle Modülü
* Mini Su Pompası
* Güç Kaynağı / Pil
* Jumper Kablolar ve Breadboard

## ⚙️ Nasıl Çalışır?
Sistem, toprağın iletkenliğini ölçerek nem seviyesini belirler.
1. **Sensör Okuma:** Analog sensör toprağın nemini 0-1023 arasında bir değer olarak okur.
2. **Karar Verme:** Eğer değer 700'ün üzerindeyse (toprak kuru), Arduino röleyi tetikler.
3. **Sulama:** Röle açıldığında su pompası çalışır ve sulama başlar.
4. **Durma:** Toprak yeterli neme ulaştığında sistem otomatik olarak durur.

## 📸 Devre ve Kod
Projenin kaynak kodlarına `sulama_sistemi.ino` dosyasından ulaşabilirsiniz. Detaylı proje raporu `Rapor.pdf` içerisinde mevcuttur.

---
📅 **Teslim Tarihi:** 15 Ocak 2026
