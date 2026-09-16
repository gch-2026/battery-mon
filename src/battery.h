#ifndef BATTERY_H
#define BATTERY_H

#include <stdint.h>

/* 输入电池电压（毫伏），返回电量百分比 0-100 */
int battery_percent(uint16_t voltage_mv);

#endif /* BATTERY_H */