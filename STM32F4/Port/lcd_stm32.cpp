//
// Created by zhuhb on 2022/12/9.
//

#include "lcd_stm32.h"
#include <lcd.h>

void Lcd::SetLcdState() {
    static uint8_t x = 0;

    switch (0) {
        case 0:
            LCD_Clear(WHITE);
            break;
        case 1:
            LCD_Clear(BLACK);
            break;
        case 2:
            LCD_Clear(BLUE);
            break;
        case 3:
            LCD_Clear(RED);
            break;
        case 4:
            LCD_Clear(MAGENTA);
            break;
        case 5:
            LCD_Clear(GREEN);
            break;
        case 6:
            LCD_Clear(CYAN);
            break;
        case 7:
            LCD_Clear(YELLOW);
            break;
        case 8:
            LCD_Clear(BRRED);
            break;
        case 9:
            LCD_Clear(GRAY);
            break;
        case 10:
            LCD_Clear(LGRAY);
            break;
        case 11:
            LCD_Clear(BROWN);
            break;
    }
    POINT_COLOR = RED;
    LCD_ShowString(30, 40, 210, 24, 24, "Explorer STM32F4");
    LCD_ShowString(30, 70, 200, 16, 16, "TFTLCD TEST");
    LCD_ShowString(30, 90, 200, 16, 16, "ATOM@ALIENTEK");
    LCD_ShowString(30, 110, 200, 16, 16, "The First Text");
    LCD_ShowString(30, 130, 200, 12, 12, "2020/9/24");
    x++;
    if (x == 12)x = 0;
}


void Lcd::ShowAdcValue(uint32_t value) {

    LCD_ShowNum(30, 40,value,4,24);

}