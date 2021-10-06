#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
    /* declare variables */
    float a, b_deg, x;
    int i, N;

    /*initialise variables */
    a = 0.0;
    b_deg = 60.0;
    N = 12;

    /*Convert pi/3 to radians */
    float b_rad;
    b_rad = (M_PI * b_deg) / 180.0;
    printf("pi/3 in Radians = %f\n", b_rad);

    /*Calculate first sum f(x0) + f(xN)*/
    float area = tan(a) + tan(b_rad);
    printf("The initial sum of tan(0) + tan(Pi/3) is %.4f\n", area);

    /*Calculate 2*f(x1) + 2*f(x2) + ... + 2*f(xN-1) using loop */
    for (i = 5; i < 60; i = i + 5)
    {
        area = area + 2 * tan((M_PI * i) / 180.0);
        printf("New area at x%d= %f\n", i / 5, area);
    }

    /* multiply with b-a/2N */
    float mult_rad = M_PI * (b_deg - a) / (2 * N) / 180.0;
    area = mult_rad * area;

    /* Calculate approximated value */
    printf("\nTrapezodial result = %f\n", area);

    /* Actual result */
    printf("Real result: %f\n", log(2.0));
}