#define ToprakSensoru A0
#define SuMotoru A1       
#define YesilLed 13
#define KirmiziLed 12

void setup(){
  pinMode(ToprakSensoru, INPUT);
  pinMode(SuMotoru, OUTPUT);
  pinMode(YesilLed, OUTPUT);    
  pinMode(KirmiziLed, OUTPUT);
  
  // Röle kullanıyorsan genelde HIGH kapatır, LOW açar. 
  // Başlangıçta motorun kapalı olması için HIGH yapıyoruz:
  digitalWrite(SuMotoru, HIGH); 
  Serial.begin(9600);
}

void loop(){
  // Sensör verisini okuyalım (kontrol amaçlı ekrana yazdırabilirsin)
  int deger = analogRead(ToprakSensoru);
  // Serial.println(deger); // İstersen bu satırı açıp sensör değerini görebilirsin.

  if(deger > 700) // Toprak KURU ise (Değer sensöre göre değişebilir)
  {
    digitalWrite(SuMotoru, LOW);   
    digitalWrite(YesilLed, LOW);   
    digitalWrite(KirmiziLed, HIGH); 
  }
  else // Toprak ISLAK ise
  {
    digitalWrite(SuMotoru, HIGH);  // Röleyi KAPAT (Motor Dursun)
    digitalWrite(YesilLed, HIGH);  // Yeşil Yansın (Durum İyi)
    digitalWrite(KirmiziLed, LOW); // Kırmızı Sönsün
  }
  delay(1000);
}
