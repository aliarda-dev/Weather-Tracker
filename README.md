***Weather Tracker***

DHT11 sensöründen okunan sıcaklık ve nem verilerini 16x2 LCD ekranda gösteren basit bir hava durumu takip sistemi geliştirdim. Amacım sensörden veri okuyup LCD ekran üzerinde gösterebilmekti.

***Donanım***

* Arduino Uno
* DHT11 (sıcaklık ve nem sensörü)
* 16x2 LCD Ekran
* 10K Potansiyometre (lcd ekran parlaklık ayarı için)
* 1x330R Direnç


***Nasıl Çalışır?***

* DHT11 sensöründen sıcaklık ve nem değerleri okunur
* Okunan değerler hava_durum() fonksiyonu ile pointer üzerinden ana döngüdeki değişkenlere aktarılır
* Değerler lcd ekranda gösterilir

***Teknik Notlar***

LCD ekran clear() ile silinince ekranda titreme yapıyordu bende sadece değişken karakterleri güncelleyerek kodu güncelledim 


***Geliştirme Fikirleri***

* ESP ile uzaktan takip
* Saatlik veya günlük olarak alınan sıcaklık dataları tutulabilir


🎥 Proje Demo

eklenecek

📷 Proje PCB Medyası

<img width="1636" height="2048" alt="weather-tracker" src="https://github.com/user-attachments/assets/128106d6-833c-465a-9003-b717158ecdbf" />

