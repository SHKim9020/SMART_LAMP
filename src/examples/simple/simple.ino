#include <NeoPixel.h>   // 네오픽셀 라이브러리를 불러옵니다.

#define PIN 3                     // 디지털핀 어디에 연결했는지 입력
#define LEDNUM 1                  // 연결된 네오픽셀의 숫자입력

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();                           // 네오픽셀 제어시작
}

void loop() {                              // 이 안에 입력한 내용들이 반복 실행됩니다
  strip.setPixelColor(0, 255, 0, 0);     // (A,R,G,B) A번째 LED를 RGB (0~255) 만큼의 밝기로 켭니다.
  delay(1000);                         // 1초 대기
  strip.show();                         // 네오픽셀 보기
  strip.setPixelColor(0, 0, 255, 0);     // (A,R,G,B) A번째 LED를 RGB (0~255) 만큼의 밝기로 켭니다.
  delay(1000);                         // 1초 대기
  strip.show();                         // 네오픽셀 보기
  strip.setPixelColor(0, 0, 0, 255);     // (A,R,G,B) A번째 LED를 RGB (0~255) 만큼의 밝기로 켭니다.
  delay(1000);                         // 1초 대기
  strip.show();                         // 네오픽셀 보기
}



