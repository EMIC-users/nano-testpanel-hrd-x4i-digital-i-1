#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "inc/userFncFile.h"
#include "inc/systemTimer.h"
#include "inc/led_Status.h"
#include "inc/led_Led2.h"
#include "inc/led_Led3.h"
#include "inc/led_Led4.h"
#include "inc/led_Led5.h"
#include "inc/timer_api1.h"
#include "inc/Digital.h"
#include "inc/Counter_Cnt1.h"
#include "inc/Counter_Cnt2.h"
#include "inc/Counter_Cnt3.h"
#include "inc/Counter_Cnt4.h"
#include "inc/conversionFunctions.h"
#include "inc/EMICBus.h"

void onReset()
{
    LEDs_Status_blink(100, 200, 5);
    Counter_Cnt1_setTimeBase(2000, 'A');
}


void Counter_Cnt1_onTimeBase(uint32_t count)
{
    LEDs_Led2_state(2);
    pI2C("RPM\t%lu", count);
}



