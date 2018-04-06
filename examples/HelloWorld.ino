// Example for display string and blink cursor

#include "LCD_I2C.h"

// Initialize the library
LCD_I2C lcd;

void setup() {
  // Set up the columns and rows of LCD
  lcd.begin(16, 2);
  // Print a message to LCD
  lcd.print("Hello, World!");
}

void loop() {
  // Turn off the cursor
  lcd.noCursor();
  delay(500);
  // Turn on the cursor
  lcd.cursor();
  delay(500);
}
