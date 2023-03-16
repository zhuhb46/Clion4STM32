#include "common_inc.h"
#include <tim.h>

/* Component Definitions -----------------------------------------------------*/
Led statusLed;
Lcd statusLcd;

/* Main Entry ----------------------------------------------------------------*/
void Main() {

    HAL_TIM_Base_Start_IT(&htim1);
    statusLed.Tick(false, false);
    char buf[100];
    printf("\r\nYour name: ");
//    scanf("%s", buf);
    printf("\r\nHello, %s!\r\n", buf);

    for (;;) {

        statusLcd.Tick();

    }

}




/* Event Callbacks -----------------------------------------------------------*/
extern "C" void Tim1Callback100Hz() {
    __HAL_TIM_CLEAR_IT(&htim1, TIM_IT_UPDATE);
    static int time1cnt = 0;

    if (time1cnt < 100) {
        time1cnt++;
    } else {
        statusLed.Toggle();

//        printf("\r\nEnter Tim1Callback100Hz");
        time1cnt = 0;
    }

}