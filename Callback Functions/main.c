#include <stdio.h>
#include "calculations/calculation.h"


static void result_cb(float a, float b, float result) {
    printf("%.2f + %.2f = %.2f\n", a, b, result);
}

int main() {
    printf("Callback functions!\n");
    init_calculation(result_cb);

    if (calculate_sum(10, 20)) {
        printf("error\n");
    }
    return 0;
}
