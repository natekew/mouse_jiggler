/*
 This version uses an Adafruit Pro Trinket.
 */

#include <ProTrinketMouse.h>

void setup()
{
TrinketMouse.begin();
}

//move mouse back and forth every 5 seconds

void loop()
{
	delay(5000);
	TrinketMouse.move(4,0,0,0);
	delay(100);
	TrinketMouse.move(-8,0,0,0);
	delay(100);
	TrinketMouse.move(4,0,0,0);
}
