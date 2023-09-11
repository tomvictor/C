//
// Created by Tom Victor
//

#include <stdint.h>
#include "ir42.h"


float parse_temperature(ir42_t *p_reading) {
    uint16_t raw = p_reading[1] | (p_reading[2] << 8);
    float temperature = (float) raw / 10;
    return temperature;
}