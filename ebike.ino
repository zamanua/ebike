
#include <Wire.h>
#include <ST7558.h>
#include <C115LCD.h>

#define OLED_RESET 2
C115LCD display(OLED_RESET);

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2

//test
//test2
//test3

#define LOGO16_GLCD_HEIGHT 16 
#define LOGO16_GLCD_WIDTH  16 
static const unsigned char PROGMEM logo16_glcd_bmp[] =
{ 
0x07, 0xE0, 
0x1F, 0xF8, 
0x3F, 0xFC, 
0x7B, 0xDE, 
0x7B, 0x9E, 
0xF9, 0x9E, 
0xF1, 0x8F, 
0xF1, 0x8F,
0xF6, 0x6F, 
0xEE, 0xF7, 
0xEF, 0xF6, 
0x7F, 0xFE, 
0x7F, 0xFC, 
0x3F, 0xFC, 
0x1F, 0xF0, 
0x03, 0xC0 };

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup()   {                
  Serial.begin(9600);

  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
  // init done

  display.clearDisplay();   // clears the screen and buffer


  // text display tests
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.setTextSize(3);
  display.println("100%");
  display.setTextSize(3);
  display.println("100k");
  display.setTextSize(1);
  display.println("100Ah 900km");
  display.println("100Ah 900km");
  display.display();

}


void loop() {
  
}


