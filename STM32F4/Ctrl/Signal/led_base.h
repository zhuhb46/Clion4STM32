#ifndef CTRL_STEP_FW_LED_BASE_H
#define CTRL_STEP_FW_LED_BASE_H

#include <cstdint>

class LedBase {
public:
    LedBase()
    = default;

    void Tick(bool _state1, bool _state2);
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

    virtual void SetLedState(uint8_t _id, bool _state) = 0;
};


#endif
