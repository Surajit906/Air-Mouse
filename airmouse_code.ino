#include <Wire.h>
#include <MPU6050.h>
#include <BleMouse.h>

MPU6050 mpu;
BleMouse bleMouse("ESP32 Air Mouse");

const int leftButtonPin = 15;
const int rightButtonPin = 4;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  mpu.initialize();

  pinMode(leftButtonPin, INPUT_PULLUP);
  pinMode(rightButtonPin, INPUT_PULLUP);

  bleMouse.begin();
}

void loop() {
  if(bleMouse.isConnected()) {
    int16_t ax, ay, az, gx, gy, gz;
    mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

    // Adjust sensitivity
    int xMove = gx / 200;
    int yMove = -gy / 200;

    bleMouse.move(xMove, yMove);

    // Left click
    if (digitalRead(leftButtonPin) == LOW) {
      bleMouse.click(MOUSE_LEFT);
      delay(200);
    }

    // Right click
    if (digitalRead(rightButtonPin) == LOW) {
      bleMouse.click(MOUSE_RIGHT);
      delay(200);
    }
  }
  delay(20);
}
