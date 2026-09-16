#include <stdio.h>

#include "battery.h"

int main(void) {
    printf("battery-mon demo\n");
    printf("----------------\n");

    const uint16_t samples[] = {3300, 3500, 3750, 4000, 4200};
    for (uint32_t i = 0; i < sizeof(samples) / sizeof(samples[0]); i++) {
        printf("%u mV -> %d %%\n", samples[i], battery_percent(samples[i]));
    }
    return 0;
}