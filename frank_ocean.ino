#include "JWB_API.h"

void setup() {
  // put your setup code here, to run once:
  breathe_all(1);
}

void loop() {
}

void button_press() {
  
  Buzzer buzz;
  LED led;
  Timer timer;
  Animation animation;

  // Frank Ocean - Thinking About You
  // First 45 seconds
  // Author: Kaira Villanueva

  // 0 - 4 seconds
  buzz.short_buzz();
  led.turn_on_all(GREEN);
  timer.pause(1000);
  led.turn_on_all(BLUE); 
  timer.pause(1000);
  led.turn_on_all(RED);
  timer.pause(1000);
  led.turn_on_all(MAGENTA); 
  timer.pause(1000);

  // 5 - 36
  led.turn_off_all();
  timer.pause(3000);
  buzz.short_buzz();
  animation.jewelbots_logo();
  timer.pause(1000);
  animation.jewelbots_logo();
  timer.pause(1000);
  animation.jewelbots_logo();
  timer.pause(1000);
  animation.jewelbots_logo();
  timer.pause(1000);
  animation.jewelbots_logo();
  timer.pause(1000);
  animation.jewelbots_logo();
  timer.pause(1000);
  animation.jewelbots_logo();
  timer.pause(1000);
  animation.jewelbots_logo();
  timer.pause(1000);

  // 37-40
  buzz.short_buzz();
  led.turn_on_all(MAGENTA); 
  timer.pause(2000);

  buzz.short_buzz();
  led.turn_on_all(RED); 
  timer.pause(2000);

  led.turn_off_all();
  timer.pause(1000);
  animation.jewelbots_logo();
  

}