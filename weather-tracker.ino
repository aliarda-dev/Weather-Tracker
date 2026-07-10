//Weather Tracker Project
//Ali Arda Kocabörek | Akdeniz EEE


#include <LiquidCrystal.h>
#include "DHT.h"

#define SICAKLIK_SENSOR 13
#define DHTTYPE DHT11

#define RS 12
#define E 11
#define D4 5
#define D5 4
#define D6 3
#define D7 2

DHT dht(SICAKLIK_SENSOR,DHTTYPE);

void hava_durum(int*,int*);

LiquidCrystal ekran(RS,E,D4,D5,D6,D7);



int main(){

  init();

  dht.begin();
  ekran.begin(16,2);
  Serial.begin(9600);

  ekran.setCursor(0, 0);
  ekran.print("Sicaklik :    C");

  ekran.setCursor(13,0);
  ekran.print(char(223));



  ekran.setCursor(0, 1);
  ekran.print("Nem : %");

  int sicaklik = 0;
  int nem = 0 ;


  while(1){ //Dongumuzde sadece sayi degerlerini guncelleyegiz

    hava_durum(&sicaklik,&nem);

    ekran.setCursor(11,0);
    ekran.print(sicaklik);

    ekran.setCursor(7,1);
    ekran.print(nem);

    delay(3000);
  }


}



void hava_durum(int* sicaklik,int* nem){

  *sicaklik = dht.readTemperature();
  *nem = dht.readHumidity();

 

}
