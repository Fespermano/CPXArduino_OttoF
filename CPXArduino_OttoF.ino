//Otto Fesperman
#include <Adafruit_CircuitPlayground.h>

bool leftButtonPressed;
bool rightButtonPressed; 

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();
  CircuitPlayground.clearPixels();
  delay(500);

  // Left Button Halloween lights
  Serial.print("Left Button: ");
  if (leftButtonPressed) {
    //P1 SET A 
    CircuitPlayground.setPixelColor(0, 0xFF6600); //Orange
    CircuitPlayground.setPixelColor(1, 0x800080); //purple
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(3, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(4, 0x800080); //purple
    CircuitPlayground.setPixelColor(5, 0x008000); //green.   // This code alternates between three different light sets (A, B and C)
    CircuitPlayground.setPixelColor(6, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(7, 0x800080); //purple
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFF6600); //orange
    delay(800);
    //P3 SET C
    CircuitPlayground.setPixelColor(2, 0xFF6600); //Orange 
    CircuitPlayground.setPixelColor(3, 0x800080); //purple
    CircuitPlayground.setPixelColor(1, 0x008000); //green
    CircuitPlayground.setPixelColor(4, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(5, 0x800080); //purple
    CircuitPlayground.setPixelColor(6, 0x008000); //green
    CircuitPlayground.setPixelColor(7, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(8, 0x800080); //purple
    CircuitPlayground.setPixelColor(9, 0x008000); //green 
    CircuitPlayground.setPixelColor(0, 0xFF6600); //orange
    delay(800);
    // P1 SET B
    CircuitPlayground.setPixelColor(0, 0x800080); //purpl.
    CircuitPlayground.setPixelColor(1, 0xFFFF00); //green
    CircuitPlayground.setPixelColor(2, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(3, 0x800080); //purpl
    CircuitPlayground.setPixelColor(4, 0xFFFF00); //green
    CircuitPlayground.setPixelColor(5, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(6, 0x800080); //purpl
    CircuitPlayground.setPixelColor(7, 0xFFFF00); //green
    CircuitPlayground.setPixelColor(8, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(9, 0x800080); //purpl
    delay(800);
    //P3 SET A
    CircuitPlayground.setPixelColor(0, 0xFF6600); //Orange 
    CircuitPlayground.setPixelColor(1, 0x800080); //purple
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(3, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(4, 0x800080); //purple
    CircuitPlayground.setPixelColor(5, 0x008000); //green
    CircuitPlayground.setPixelColor(6, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(7, 0x800080); //purple
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFF6600); //orange
    delay(800);
    //P3 SET C
    CircuitPlayground.setPixelColor(2, 0xFF6600); //Orange 
    CircuitPlayground.setPixelColor(3, 0x800080); //purple
    CircuitPlayground.setPixelColor(1, 0x008000); //green
    CircuitPlayground.setPixelColor(4, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(5, 0x800080); //purple
    CircuitPlayground.setPixelColor(6, 0x008000); //green
    CircuitPlayground.setPixelColor(7, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(8, 0x800080); //purple
    CircuitPlayground.setPixelColor(9, 0x008000); //green 
    CircuitPlayground.setPixelColor(0, 0xFF6600); //orange
    delay(800);
    // P1 SET B
    CircuitPlayground.setPixelColor(0, 0x800080); //purpl
    CircuitPlayground.setPixelColor(1, 0xFFFF00); //green
    CircuitPlayground.setPixelColor(2, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(3, 0x800080); //purpl
    CircuitPlayground.setPixelColor(4, 0xFFFF00); //green
    CircuitPlayground.setPixelColor(5, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(6, 0x800080); //purpl
    CircuitPlayground.setPixelColor(7, 0xFFFF00); //green
    CircuitPlayground.setPixelColor(8, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(9, 0x800080); //purpl
    delay(800);
     //P1 SET A
    CircuitPlayground.setPixelColor(0, 0xFF6600); //Orange
    CircuitPlayground.setPixelColor(1, 0x800080); //purple
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(3, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(4, 0x800080); //purple
    CircuitPlayground.setPixelColor(5, 0x008000); //green
    CircuitPlayground.setPixelColor(6, 0xFF6600); //orange
    CircuitPlayground.setPixelColor(7, 0x800080); //purple
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFF6600); //orange
    Serial.print("Halloween");

  } else {

    Serial.print("WorkingH");
  }
// Right Button Christmas Lights
  Serial.print("   Right Button: ");
  if (rightButtonPressed) {
    //SET A
    CircuitPlayground.setPixelColor(0, 0xFF0000); //Red // 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(3, 0xFF0000); //Red        // This code alternates between three different light sets (A, B and C)
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(5, 0x008000); //green
    CircuitPlayground.setPixelColor(6, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFF0000); //Red
    delay(800);
    //SET B
    CircuitPlayground.setPixelColor(1, 0xFF0000); //Red        //I reordered the placement of colors instead of changeing colors here.   
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(4, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(5, 0x008000); //green.     
    CircuitPlayground.setPixelColor(7, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFFFFFF); //White
    delay(800);
    //SET C
    CircuitPlayground.setPixelColor(0, 0xFF0000); //Red //  
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(3, 0x008000); //green
    CircuitPlayground.setPixelColor(2, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(5, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(4, 0xFF0000); //green
    CircuitPlayground.setPixelColor(6, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(9, 0x008000); //green 
    CircuitPlayground.setPixelColor(8, 0xFF0000); //Red
    delay(800);
    //SET A
    CircuitPlayground.setPixelColor(0, 0xFF0000); //Red // 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(3, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(5, 0x008000); //green
    CircuitPlayground.setPixelColor(6, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFF0000); //Red
    delay(800);
     //SET C
    CircuitPlayground.setPixelColor(0, 0xFF0000); //Red //  
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(3, 0x008000); //green
    CircuitPlayground.setPixelColor(2, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(5, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(4, 0xFF0000); //green
    CircuitPlayground.setPixelColor(6, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(9, 0x008000); //green 
    CircuitPlayground.setPixelColor(8, 0xFF0000); //Red
    delay(800);
     //SET B
    CircuitPlayground.setPixelColor(1, 0xFF0000); //Red //I reordered the placement of colors instead of changeing colors.  
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(4, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(5, 0x008000); //green
    CircuitPlayground.setPixelColor(7, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFFFFFF); //White
    delay(800);
       //SET A
    CircuitPlayground.setPixelColor(0, 0xFF0000); //Red // 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(3, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(5, 0x008000); //green
    CircuitPlayground.setPixelColor(6, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFF0000); //Red
    delay(800);
    Serial.print("Christmas");

  } else {

    Serial.print("WorkingC"); 
  }
    Serial.println();
    delay(4000);   
  }
