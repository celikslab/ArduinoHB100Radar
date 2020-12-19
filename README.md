# ArduinoHB100RadarProject

Bu radar projesinde fiziğin bir kanunu olan Doppler ‘i  kullanarak hareket halindeki araçların hızlarını ölçmek ve bu ölçümleri belli bir yerde toplamaktır. Proje ticari bir fikir olmayıp daha çok belli bir bölgedeki (alandaki) trafik akışını incelemek amacıyla meydana gelmiştir. Bu suretle prototip çalışmasında basit bir radar modülü olan HB100 kullanıldı. Modülün ölçtüğü frekans değerlerini , Doppler formüllerinden yararlanarak hıza geçilmiştir. Çıkan veriler bir lcd ile doğrudan ve de wifi aracılığıyla da uzaktan erişimi sağlanmıştır. Prototip elektronik devre delikli plakete aktarılmış ve de ardından 3d printerdan bir kutu(3d baskı) tasarımı yapılmıştır. Sonuç olarak bu projede Doppler Radar ile hız ölçümlerini site üzerinde görüntüledik.</li>

## Dopler Nedir ?

<br>Doppler etkisi, bir ses kaynağı, bir gözlemciye (yani duyucuya) göre uzaklaşır ya da yakınlaşırsa veya gözlemci, ses kaynağına göre uzaklaşır ya da yakınlaşırsa frekansta ya da ses perdesinde (pitch) meydana gelen belirgin değişikliktir. Doppler frekansı kayma miktarı fD hedef hızının bir ölçütüdür ve tüm dalga hareketlerine uygulanır. Bu etki Avusturyalı fizikçi Christian Doppler (1803-1853) tarafından keşfedilmiş olup, kendisinin adı ile anılmaktadır.


## Kullanılan Malzemeler

<li>Arduino nano(ch328)</li>
<li>Jumper kablo set</li>    
<li>lcd ekran(I2C)</li>      
<li>Hb100 sensör</li>  
<li>9v adaptor</li>     
<li>konnektör</li>       
<li>delikli plaket</li>
<li>trimpot</li>              
<li>wifi kart</li>            

<br>Anfi için malzemeler;

<li>lm324 OpAmp</li>        
<li>2 x 100K, 12K, 330K, 8.2K, 2 x 1M, 2 x 10K direnç</li>    
<li>2 x 2.2nF, 3 x 4.7uF, 0.1uF, 100uF kapasitör</li>

