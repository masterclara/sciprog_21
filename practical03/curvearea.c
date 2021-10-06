#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
    /* declare variables */
    float a, b, sum, x;
    int i;

    /*initialise variables */
    a = 0;
    b = M_PI / 3;
    x = 0;
    x[1] = 0;

    sum = tan(a) + tan(b);
    printf("The sum of tan(0) + tan(Pi/3) is %.4f\n", sum);

    for (i = 0; i < 10; i++)
    {
        x[i + 1] = x[i] + (b / 10);
    }
}