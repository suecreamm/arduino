#include <Adafruit_NeoPixel.h>

#define LED_PIN 3
#define BUTTON_PIN 9
#define LED_COUNT 64
#define BRIGHTNESS 255

boolean current_btn = LOW;
boolean last_btn = LOW;
int btn = 0;

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void color0(){
  for (int i = 0; i < LED_COUNT; i++) {
    strip.setPixelColor(i, 255, 200, 50); //warm white
  }
  strip.show();
  delay(1000);}

void setup() {
  strip.begin();
  strip.setBrightness(BRIGHTNESS);
  color0();
  
}


void color1(){
  int a = 8*3;
  int b = 8*2;
  int c = 8*3;
  
  for (int i = 0; i < a; i++) {
    strip.setPixelColor(i, 76, 201, 240); //blue
  }

  for (int i = a; i < a+b; i++) {
    strip.setPixelColor(i, 114, 9, 163); //purple
  }

  for (int i = a+b; i < LED_COUNT; i++) {
    strip.setPixelColor(i, 247, 37, 133); //pink
  }

  strip.show();
  }

void color2(){
  for (int i = 0; i < LED_COUNT; i++) {
    strip.setPixelColor(i, 76, 201, 240); //blue
  }

  strip.show();
  }

void color3(){
  for (int i = 0; i < LED_COUNT; i++) {
    strip.setPixelColor(i, 114, 9, 163); //purple
  }

  strip.show();
  }
  
void color4(){
  for (int i = 0; i < LED_COUNT; i++) {
    strip.setPixelColor(i, 247, 37, 133); //pink
  }

  strip.show();
  }

void color5(){
  int a = 8*3;
  int b = 8*2;
  int c = 8*3;
  
  for (int i = 0; i < a; i++) {
    strip.setPixelColor(i, 84, 22, 144); //purple
  }

  for (int i = a; i < a+b; i++) {
    strip.setPixelColor(i, 255, 73, 73); //red
  }

  for (int i = a+b; i < LED_COUNT; i++) {
    strip.setPixelColor(i, 255, 141, 41); //yellow
  }

  strip.show();
  }

void color6(){
  for (int i = 0; i < LED_COUNT; i++) {
    strip.setPixelColor(i, 255, 73, 73); //red
  }

  strip.show();
  }

void coloroff(){
  strip.begin();
  strip.setBrightness(0);
  strip.show();
  
  strip.begin();
  strip.setBrightness(BRIGHTNESS);

  }
 

void loop() {

  current_btn = digitalRead(BUTTON_PIN);
  
  if (last_btn == LOW && current_btn == HIGH){
      btn++;
      delay(400);

      if (btn == 0){
        color0();
      }
      else if (btn == 1){
        color1();
      }
      else if (btn == 2){
        color2();
      }
      else if (btn == 3){
        color3();
      }
      else if (btn == 4){
        color4();
      }
      else if (btn == 5){
        color5();
      }
      else if (btn == 6){
        color6();
      }
      else if (btn == 7){
        coloroff();
        btn = -1;
      }
        
  }

  last_btn = LOW;
  
} //loop end
  
