#include "U8glib.h"

//U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_DEV_0 | U8G_I2C_OPT_NO_ACK | U8G_I2C_OPT_FAST); // Fast I2C / TWI

U8GLIB_SSD1306_128X64 u8g(13, 11, 8, 9, 10); //SPI Connection

// 'Boost_Gauge_Preview', 128x64px
const unsigned char epd_bitmap_Boost_Gauge_Preview [] PROGMEM = {
	0xf8, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x0e, 0x7c, 0x00, 0x00, 0x1c, 0xf8, 0x00, 0x00, 0x00, 
	0xd8, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x06, 0x6c, 0x00, 0x00, 0x0c, 0xc0, 0x00, 0x00, 0x00, 
	0xd8, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x06, 0x6c, 0x00, 0x00, 0x0c, 0xf8, 0x00, 0x00, 0x00, 
	0xd8, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x06, 0x6c, 0x00, 0x00, 0x0c, 0x18, 0x00, 0x00, 0x00, 
	0xd8, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x06, 0x6c, 0x00, 0x00, 0x0c, 0x18, 0x00, 0x00, 0x00, 
	0xf8, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x0f, 0x7c, 0x00, 0x00, 0x1e, 0xf8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 
	0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 
	0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x55, 0x55, 0x55, 0x55, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xaa, 0xaa, 0xaa, 0xa9, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xaa, 0xaa, 0xaa, 0xa9, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xaa, 0xaa, 0xaa, 0xa9, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xaa, 0xaa, 0xaa, 0xa9, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xaa, 0xaa, 0xaa, 0xa9, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 0xa9, 
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x07, 0xff, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x18, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x60, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x00, 0x02, 0x00, 0x0f, 0xdb, 0x7d, 0xf7, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x00, 0x02, 0x00, 0x03, 0x1b, 0x6d, 0xb6, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x02, 0x00, 0x03, 0x1b, 0x6d, 0xe6, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x03, 0xff, 0xc2, 0x00, 0x03, 0x1b, 0x79, 0xb6, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x04, 0x90, 0x3c, 0x00, 0x03, 0x1b, 0x6d, 0xb6, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x0c, 0x98, 0x10, 0x00, 0x03, 0x1f, 0x6d, 0xf7, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x12, 0xa4, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x11, 0xc4, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x1f, 0xfc, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x11, 0xc4, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x12, 0xa4, 0x10, 0x00, 0x0f, 0xbe, 0xfb, 0xef, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x0c, 0x98, 0x10, 0x00, 0x0d, 0xb6, 0xdb, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x04, 0x90, 0x20, 0x00, 0x0f, 0x36, 0xdb, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x03, 0xe0, 0x20, 0x00, 0x0d, 0xb6, 0xd8, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00, 0x0d, 0xb6, 0xdb, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00, 0x0f, 0xbe, 0xfb, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x18, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


int progress = 0;

void setup() {
  u8g.setFont(u8g_font_tpssb);
  u8g.setColorIndex(1);
}

void loop() {
  u8g.firstPage();
  do {
  //   u8g.drawStr(25, 50, "Progress Bar");
  //   u8g.drawFrame(0, 10, 128, 20);
  //   u8g.drawBox(10, 15, progress, 10);

    
    u8g.setColorIndex(1);
    u8g.drawBitmapP(0, 0, 128/8, 64, epd_bitmap_Boost_Gauge_Preview);
    u8g.setColorIndex(0);
    u8g.drawBox(1, 12, 126, 12);
    u8g.setColorIndex(1);
    u8g.drawBox(2, 13, map(progress, 0, 100, 0, 124), 10);

  } while ( u8g.nextPage() );

  if (progress < 100) {
    progress++;
  } else {
    progress = 0;
  }
}