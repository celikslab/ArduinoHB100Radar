# ArduinoHB100RadarProject
## HB100 Radar ile Hız Ölçme ve ESP8266 Kullanarak ThingSpeak'e Göndermek


<p align="center">
  <img width="400" height="350" src="https://github.com/mcelik7/ArduinoHB100RadarProject/blob/main/images/prototip1.png">
</p>

<br>Bu radar projesinde fiziğin bir kanunu olan Doppler ‘i  kullanarak hareket halindeki araçların hızlarını ölçmek ve bu ölçümleri belli bir yerde toplamaktır. Proje ticari bir fikir olmayıp daha çok belli bir bölgedeki (alandaki) trafik akışını incelemek amacıyla meydana gelmiştir. Bu suretle prototip çalışmasında basit bir radar modülü olan HB100 kullanıldı. Modülün ölçtüğü frekans değerlerini , Doppler formüllerinden yararlanarak hıza geçilmiştir. Çıkan veriler bir lcd ile doğrudan ve de wifi aracılığıyla da uzaktan erişimi sağlanmıştır. Prototip elektronik devre delikli plakete aktarılmış ve de ardından 3d printerdan bir kutu(3d baskı) tasarımı yapılmıştır. Sonuç olarak bu projede Doppler Radar ile hız ölçümlerini site üzerinde görüntüledik.</li>

## Doppler Nedir ?

<br>Doppler etkisi, bir ses kaynağı, bir gözlemciye (yani duyucuya) göre uzaklaşır ya da yakınlaşırsa veya gözlemci, ses kaynağına göre uzaklaşır ya da yakınlaşırsa frekansta ya da ses perdesinde (pitch) meydana gelen belirgin değişikliktir. Doppler frekansı kayma miktarı fD hedef hızının bir ölçütüdür ve tüm dalga hareketlerine uygulanır. Bu etki Avusturyalı fizikçi Christian Doppler (1803-1853) tarafından keşfedilmiş olup, kendisinin adı ile anılmaktadır.

<p align="center">
  <img width="400" height="350" src="https://github.com/mcelik7/ArduinoHB100RadarProject/blob/main/images/doppler.jpg">
</p>

## Kullanılan Malzemeler

<li>Arduino pro mini(ch328)</li>
<li>Jumper kablo set</li>    
<li>16x2 lcd ekran</li>      
<li>Hb100 sensör</li>
<li>Esp8266 Wifi Modül</li>
<li>9v adaptor</li>     
<li>güç konnektörü</li>       
<li>delikli plaket</li>
<li>trimpot</li>              
          

<br>Anfi için malzemeler;

<li>lm324 OpAmp</li>        
<li>2 x 100K, 12K, 330K, 8.2K, 2 x 1M, 2 x 10K direnç</li>    
<li>2 x 2.2nF, 3 x 4.7uF, 0.1uF, 100uF kapasitör</li>

## Devre Şeması

<br>BreadBoard Üzerinde Kurulum ;

<br>Delikli Plaket Üzerinde Kurulum;
<br>
<br>
<p align="center">
  <img width="400" height="300" src="https://github.com/mcelik7/ArduinoHB100RadarProject/blob/main/images/plaket.png">
</p>

## Kodlar

Kodların tamamına [buradan](https://github.com/mcelik7/ArduinoHB100RadarProject/blob/main/RadarProject.ino) ulaşabilirsiniz.

Bu kısımda modem bilgilerimizi giriyoruz ki wifi modül bağlantı yapabilsin.
```c++
String agAdi = "admin";                 //Modem adını buraya yazıyoruz.    
String agSifresi = "123456";           //Modem şifresini buraya yazıyoruz.
```

Burada ThingSpeak sitesinden aldığımız ApiKeyi yazacağımız satırı görüyoruz.
```c++
String veri = "GET https://api.thingspeak.com/update?api_key=WXQ7CV88VTIPT3XA"; 
//Thingspeak komutu. Key kısmına kendi api keyimizi yazıyoruz.  
```
## Kutu Tasarımı(3D Baskı)

Çizim dosyalarına(stl) [buradan](https://github.com/mcelik7/ArduinoHB100RadarProject/blob/main/stl/) ulaşabilirsiniz.

<p align="center">
  <img width="400" height="300" src="https://github.com/mcelik7/ArduinoHB100RadarProject/blob/main/images/sketchupcizim.png">
    <img width="400" height="300" src="https://github.com/mcelik7/ArduinoHB100RadarProject/blob/main/images/ilkcizim.jpg">
</p>

## Montaj
<br>

<p align="center">
  <img width="400" height="300" src="https://github.com/mcelik7/ArduinoHB100RadarProject/blob/main/images/montaj.jpg">
    <img width="400" height="300" src="https://github.com/mcelik7/ArduinoHB100RadarProject/blob/main/images/final.jpg">
</p>

<li> Sr. Embedded Software Engineer <li> Muhammed Emin Çelik
