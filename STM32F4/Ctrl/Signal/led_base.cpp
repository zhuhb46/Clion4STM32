#include <cstdio>
#include "led_base.h"

void LedBase::Tick(bool _state1, bool _state2) {
    SetLedState(0, _state1);
    SetLedState(1, _state2);
}

void LedBase::Toggle() {
    static bool state = false;
    SetLedState(0, state);
    state = !state;
    SetLedState(1, state);
}