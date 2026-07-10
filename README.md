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

***Not***

  Projenin pcb dosyaları yüklendi.Bu projede kicadde footprintinde 3D step dosyası olmayan malzemelere internetten 3D model yüklemeyi öğrendim.


🎥 Proje Demo

<img width="1636" height="2048" alt="weather-tracker" src="https://github.com/user-attachments/assets/31364874-4ee3-4ffe-ac7d-720d348dc37c" />


📷 Proje PCB Medyası

<img width="1008" height="840" alt="weather-tracker4" src="https://github.com/user-attachments/assets/3ec902d4-0ad8-4f5d-b63b-65516123d35a" />




