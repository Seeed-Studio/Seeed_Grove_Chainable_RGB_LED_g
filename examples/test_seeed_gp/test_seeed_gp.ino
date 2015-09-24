// test for seeed graphical programming project
// loovee @ 2015-8-4

#include <ChainableLED.h>

#define NUM_LEDS  5         // number of leds

ChainableLED leds;

const int pinClk = 7;
const int pinDta = 8;

void setup()
{

}

void loop()
{
    leds.ChainableRGBLEDWrite(pinClk, pinDta, NUM_LEDS, 255, 0, 0);         // red
    delay(500);
    leds.ChainableRGBLEDWrite(pinClk, pinDta, NUM_LEDS, 0, 255, 0);         // green
    delay(500);
    leds.ChainableRGBLEDWrite(pinClk, pinDta, NUM_LEDS, 0, 0, 255);         // blue
    delay(500);
}