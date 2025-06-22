#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


// OLED display dimensions
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Create OLED display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // Initialize serial (optional, for debugging)
  Serial.begin(9600);

  // Initialize the OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED init failed");
    while (true);  // Stop if OLED not found
  }

  // Clear display buffer
  display.clearDisplay();

  // Set text settings
  display.setTextSize(2);              // Text size (1–3)
  display.setTextColor(SSD1306_WHITE); // White text
  display.setCursor(0, 0);             // Top-left corner

  // Print text
  display.println("Hello!");
  display.display();                   // Show it on screen
}

void loop() {
  // Nothing here for now
}
