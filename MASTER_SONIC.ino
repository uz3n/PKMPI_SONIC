#include "RTClib.h"
RTC_DS3231 rtc;
char daysOfTheWeek[7][12] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jum'at", "Sabtu"};
int jam, menit, detik;
int tanggal, bulan, tahun;
String hari;

void setup () {
  Serial.begin(9600);
  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    Serial.flush();
    while (1) delay(10);
  }

  /*pilih salah satu dibawah jika akan mengatur jam rtc*/
//   rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); //mengikuti jam laptop
  // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));      //manual
}

void loop () {
//  TIME();

}
