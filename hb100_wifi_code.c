#include <FreqMeasure.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include<SoftwareSerial.h>   

String agAdi = "Mhmmd";                     //Ağımızın adını buraya yazıyoruz.    
String agSifresi = "123456";                //Ağımızın şifresini buraya yazıyoruz.
String ip = "184.106.153.149";          

int rxPin = 10;                             //ESP8266 RX pini
int txPin = 11;                             //ESP8266 TX pini
LiquidCrystal_I2C lcd(0x27, 16, 2);
SoftwareSerial esp(rxPin, txPin);
 
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Freq:");
  lcd.setCursor(0,1);
  lcd.print("Speed:");
  FreqMeasure.begin();
  delay(500);


  Serial.begin(9600);                       //Seri port ile haberleşmemizi başlatıyoruz.
  Serial.println("Baslatiliyor");
  esp.begin(115200);                        //ESP8266 ile seri haberleşmeyi başlatıyoruz.
  esp.println("AT");                        //AT komutu ile modül kontrolünü yapıyoruz.
  Serial.println("AT Yollandı");
  while(!esp.find("OK")){                   //Modül hazır olana kadar bekliyoruz.
  esp.println("AT");
  Serial.println("ESP8266 Bulunamadı.");
}
  Serial.println("OK Komutu Alındı");
  esp.println("AT+CWMODE=1");                //ESP8266 modülünü client olarak ayarlıyoruz.
  while(!esp.find("OK")){                    //Ayar yapılana kadar bekliyoruz.
  esp.println("AT+CWMODE=1");
  Serial.println("Ayar Yapılıyor....");
}
  Serial.println("Client olarak ayarlandı");
  Serial.println("Aga Baglaniliyor...");
  esp.println("AT+CWJAP=\""+agAdi+"\",\""+agSifresi+"\"");    //Ağımıza bağlanıyoruz.
  while(!esp.find("OK"));                                     //Ağa bağlanana kadar bekliyoruz.
  Serial.println("Aga Baglandi.");
  delay(1000);
  esp.println("AT+CIPSTART=\"TCP\",\""+ip+"\",80");           //Thingspeak'e bağlanıyoruz.
  if(esp.find("Error")){                                      //Bağlantı hatası kontrolü yapıyoruz.
    Serial.println("AT+CIPSTART Error");
  }      
}

double sum=0;
int count=0;

void loop() {

    if (FreqMeasure.available()) {
    sum = sum + FreqMeasure.read();
    count = count + 1;
                             
    if (count > 30) {
      float frequency = FreqMeasure.countToFrequency(sum / count);
      float spd = frequency / 19.49; 
      lcd.setCursor(7, 0);
      lcd.print("                ");
      lcd.setCursor(7, 1);
      lcd.print("                ");
      lcd.setCursor(7, 0);
      lcd.print(frequency,1);
      Serial.println(spd);
      lcd.setCursor(14, 0);
      lcd.print("Hz");
      //lcd.print("       ");
      lcd.setCursor(7,1);
      lcd.print(spd,1);
      lcd.setCursor(12, 1);
      lcd.print("km/h");
      
 if(spd>8){
        esp.println("AT+CIPSTART=\"TCP\",\""+ip+"\",80");           //Thingspeak'e bağlanıyoruz.
  if(esp.find("Error")){                                      //Bağlantı hatası kontrolü yapıyoruz.
    Serial.println("AT+CIPSTART Error");
  }
      
  String veri = "GET https://api.thingspeak.com/update?api_key=WXQ7CV88VTIPT3XA";   
  //Thingspeak komutu. Key kısmına kendi api keyimizi yazıyoruz.  
  
  veri += "&field1=";
  veri += String(spd);
  veri += "\r\n\r\n"; 
  esp.print("AT+CIPSEND=");                                   //ESP'ye göndereceğimiz veri uzunluğunu veriyoruz.
  esp.println(veri.length()+2);
  delay(1000);
  if(esp.find(">")){                                          //ESP8266 hazır olduğunda içindeki komutlar çalışıyor.
    esp.print(veri);                                          //Veriyi gönderiyoruz.
    Serial.println(veri);
    Serial.println("Veri gonderildi.");
    delay(1000);
  }
   Serial.println("Baglantı Kapatildi.");
  esp.println("AT+CIPCLOSE");                                //Bağlantıyı kapatıyoruz
  delay(200);  
 }
   sum = 0;
      count = 0;
    }
    }                                     
}
