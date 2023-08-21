//
// Created by Tom Victor on 2023-08-21.
//

#pragma once


typedef void (*calculation_result_cb_t)(float a, float b, float result);

int init_calculation(calculation_result_cb_t result_callback);

int calculate_sum(float a, float b);