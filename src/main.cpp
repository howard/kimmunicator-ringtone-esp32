#include <Arduino.h>

#define LOW_NOTE 396
#define TONE_0 790
#define TONE_1 940
#define BUZZER_OUT 25
#define PRIMARY_DURATION 140

void playLowTone() {
  tone(BUZZER_OUT, TONE_0, PRIMARY_DURATION);
  tone(BUZZER_OUT, LOW_NOTE, 10);
  delay(50);
}

void playHighTone() {
  tone(BUZZER_OUT, TONE_1, PRIMARY_DURATION);
  tone(BUZZER_OUT, LOW_NOTE, 10);
  delay(50);
}

void setup() {
  pinMode(BUZZER_OUT, OUTPUT);
  playLowTone();
  delay(200);
  playLowTone();
  delay(200);
  playHighTone();
  delay(100);
  playLowTone();
}

void loop() {
  delay(5000);
}