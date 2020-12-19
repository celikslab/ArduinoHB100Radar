# ArduinoHB100RadarProject
Bu radar projesinde fiziğin bir kanunu olan Doppler ‘i  kullanarak hareket halindeki araçların hızlarını ölçmek ve bu ölçümleri belli bir yerde toplamaktır. Proje ticari bir fikir olmayıp daha çok belli bir bölgedeki (alandaki) trafik akışını incelemek amacıyla meydana gelmiştir. Bu suretle prototip çalışmasında basit bir radar modülü olan HB100 kullanıldı. Modülün ölçtüğü frekans değerlerini , Doppler formüllerinden yararlanarak hıza geçilmiştir. Çıkan veriler bir lcd ile doğrudan ve de wifi aracılığıyla da uzaktan erişimi sağlanmıştır. Prototip elektronik devre delikli plakete aktarılmış ve de ardından 3d printerdan bir kutu(3d baskı) tasarımı yapılmıştır. Sonuç olarak bu projede Doppler Radar ile hız ölçümlerini site üzerinde görüntüledik.</li>

## Dopler Nedir ?

<br>Doppler etkisi, bir ses kaynağı, bir gözlemciye (yani duyucuya) göre uzaklaşır ya da yakınlaşırsa veya gözlemci, ses kaynağına göre uzaklaşır ya da yakınlaşırsa frekansta ya da ses perdesinde (pitch) meydana gelen belirgin değişikliktir. Doppler frekansı kayma miktarı fD hedef hızının bir ölçütüdür ve tüm dalga hareketlerine uygulanır. Bu etki Avusturyalı fizikçi Christian Doppler (1803-1853) tarafından keşfedilmiş olup, kendisinin adı ile anılmaktadır.


## Kullanılan Malzemeler

Arduino nano(ch328) 
Jumper kablo set    
lcd ekran(I2C)      
Hb100 sensör  
9v adaptor     
konnektör       
delikli plaket
trimpot              
wifi kart            

Anfi için malzemeler

lm324 OpAmp        
2 x 100K direnç    
12K direnç         
330K direnç        
8.2K direnç        
2 x 1M direnç      
2 x 10K direnç     
2 x 2.2nF kapasitör
3 x 4.7uF kapasitör
0.1uF kapasitör    
100uF kapasitör    
