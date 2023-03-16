#include <cstdio>
#include "lcd_base.h"

void LcdBase::Tick() {
//    SetLcdState();
    ShowAdcValue(4567);
}

void LcdBase::Toggle() {
}