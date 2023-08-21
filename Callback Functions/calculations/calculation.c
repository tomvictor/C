//
// Created by Tom Victor on 2023-08-21.
//

#include "stdio.h"
#include "calculation.h"

static calculation_result_cb_t calc_result_cb = NULL;

int init_calculation(calculation_result_cb_t result_callback) {
    calc_result_cb = result_callback;
    return 0;
}

int calculate_sum(float a, float b) {
    if (calc_result_cb != NULL) {
        calc_result_cb(a, b, a + b);
    }
    return 0;
}