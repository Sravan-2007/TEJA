#include <stdio.h>

double inverse(double x) {
    if (x == 0) {
        printf("Error: Division by zero.\n");
        return 0; // Handle division by zero
    }
    return 1 / x;
}

