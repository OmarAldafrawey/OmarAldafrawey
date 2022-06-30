#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    float x = get_double("x: ");

    // Prompt user for y
    float y = get_double("y: ");

    // Divide x by y
    float z = x / y;

    printf("%f\n", z);
}

