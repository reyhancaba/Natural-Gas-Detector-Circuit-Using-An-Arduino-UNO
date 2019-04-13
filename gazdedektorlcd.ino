#include <LiquidCrystal.h>

// Kütüphaneyi arayüz pinleri ile başlattık.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int GelenDeger;                     // Değişken tanımlama kısmında okunan analog değer, gerilime çevirme işlemi sonrasındaki değer tanımlandı.
float GelenDegerGerilim;
float GazMiktari;

int a;                              // Değişkenimizi tanımladık.
int esikDegeri = 650;               //Gaz eşik değerini belirliyoruz. Araştırmalara göre dikkate alınması gereken eşik değerini kendiniz belirleyebilirsiniz.    
int BuzzerPin = 9;                  //Buzzerın takılacağı pin numarası
int deger;                          //Sensörden okunan değer



  void setup(){
     // LCD sütun ve satır sayısı ayarlandı.
  lcd.begin(16, 2);
  // LCD ye mesaj yazdırdım. (isteğe göre değişebilir)
  lcd.print("Algılanıyor..");
  // Algılanıyor..  yazısından sonra 2 saniye beklettim.
  delay(2000);
  //Ekranı temizledim ve daha sonra Gaz değerini yazdirdim.
  lcd.clear();
  lcd.print("GAZ MIKTARI:");
  
 Serial.begin(9600);                           // Seri haberleşmeyi başlatmış oldum.
 pinMode(BuzzerPin, OUTPUT);                   //Buzzer pinini çıkış olarak ayarlıyoruz.
 }
 
