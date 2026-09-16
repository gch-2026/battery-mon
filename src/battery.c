#include "battery.h"

/* 单节锂电池的典型电压范围：3.3V 视为耗尽，4.2V 视为充满 */
#define BATTERY_MIN_MV 3300
#define BATTERY_MAX_MV 4200

int battery_percent(uint16_t voltage_mv) {
    if (voltage_mv <= BATTERY_MIN_MV) {
        return 0;
    }
    if (voltage_mv >= BATTERY_MAX_MV) {
        return 100;
    }
    return (int)((voltage_mv - BATTERY_MIN_MV) * 100 / (BATTERY_MAX_MV - BATTERY_MIN_MV));
}