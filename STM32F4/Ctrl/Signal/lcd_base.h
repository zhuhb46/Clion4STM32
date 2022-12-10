#ifndef CTRL_STEP_FW_LCD_BASE_H
#define CTRL_STEP_FW_LCD_BASE_H

#include <cstdint>

class LcdBase {
public:
    LcdBase()
    = default;

    void Tick();
    void Toggle();

private:
    uint32_t timer = 0;
    uint32_t timerHeartBeat = 0;
    bool motorEnable = false;
    bool heartBeatEnable = false;
    uint8_t heartBeatPhase = 1;
    uint8_t blinkNum = 0;
    uint8_t targetBlinkNum = 0;
    uint32_t timerBlink = 0;
    uint8_t blinkPhase = 1;

    virtual void SetLcdState() = 0;
};


#endif
