/*
 * created at 2022-11-29
 * LED with arduino tilt sensor(SW-520D)
 */

// pin map
#define LED 13
#define TILT 12

bool is_tilted;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(TILT, INPUT_PULLUP);
}

void loop() {
  is_tilted = digitalRead(TILT); // 입력신호가 HIGH라면, 내부 pullup 저항과 연결된 것 -> 기울기 센서 내부에서 연결이 끊김 -> 기울어짐
  if (is_tilted){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
