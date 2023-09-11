#include <stdio.h>
#include "ir42.h"



static ir42_t reading[] = {
        6, 11, 1, 0, 255, 219, 7, 1, 7, 3, 6, 0, 0
};


int main() {
    printf("IR42 Parsing ->\n");
    printf("Temperature: %.1f\n", parse_temperature(reading));
    return 0;
}

