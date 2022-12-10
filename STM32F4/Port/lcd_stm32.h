//
// Created by zhuhb on 2022/12/9.
//

#ifndef STM32F4_LCD_STM32_H
#define STM32F4_LCD_STM32_H

#include "lcd_base.h"


class Lcd :public LcdBase
{

private:
    void SetLcdState() override;

};


#endif //STM32F4_LCD_STM32_H