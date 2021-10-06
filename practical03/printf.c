#include <stdio.h>

int main(void)
{
    /* declare integer and floating point variables */
    int int1, int2;
    float float1, float2;

    /*Initialise variables */
    int1 = 4;
    int2 = 17;

    float1 = 2.34;
    float2 = 4.5732;

    /*Printing variable values */

    /*default format */
    printf("Default: Two ints %d, %d and two floats %f, %f\n", int1, int2, float1, float2);

    /* floats with 4 decimal places */
    printf("Four decimal floats: Two ints %d, %d and two floats %.4f, %4f\n", int1, int2, float1, float2);
}