#include <Arduino_GFX_Library.h>

#define TFT_CS   10
#define TFT_DC    9
#define TFT_RST   8

Arduino_DataBus *bus = new Arduino_HWSPI(TFT_CS, TFT_DC);
Arduino_GFX *gfx = new Arduino_GC9A01(bus, TFT_RST, 2 /* rotation */, true /* IPS */);

void setup() {
  gfx->begin();
  gfx->fillScreen(BLACK);
  gfx->setCursor(60, 110); // try adjusting this to center
  gfx->setTextColor(WHITE);
  gfx->setTextSize(2);
  gfx->println("Hello Round!");
}

void loop() {}
