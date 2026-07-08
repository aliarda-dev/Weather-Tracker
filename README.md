***Weather Tracker***

DHT11 sensöründen okunan sıcaklık ve nem verilerini 16x2 LCD ekranda gösteren basit bir hava durumu takip sistemi geliştirdim. Amacım sensörden veri okuyup LCD ekran üzerinde gösterebilmekti.

***Donanım***

* Arduino Uno
* DHT11 (sıcaklık ve nem sensörü)
* 16x2 LCD Ekran
* 10K Potansiyometre (LCD ekran parlaklık ayarı için)
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

eklenecek
