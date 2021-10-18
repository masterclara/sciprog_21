/* compile on sciprog using gcc -lm -o trapez_tan trapez_tan.c */

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

/*declare functions */
float degtorad(float degang);
float areacalc(int num);

int main(void)
{
    /* declare variables */
    int i;
    float deg, rad;
    int N = 12;
    /*declaring array for tan(x)*/
    float T[N + 1];

    /*Calculate values for tan(xi) in radians in the range [0,60] where i = 0, 1, ..., 12 as array elements
    xi in radians*/
    for (i = 0; i <= N; i++)
    {
        deg = i * 5.0;
        rad = (degtorad(deg));
        T[i] = tan(rad);
        printf("T[%d] = %f (f(x) at x = %d)\n", i, T[i], i);
    }

    /* Find area by trapezoidal rule */
    float area;
    area = T[0] + T[N];

    for (i = 1; i < N; i++)
    {
        area = area + 2.0 * T[i];
    }

    /* Multiply area by (pi/3)/2N after converting to radians */
    float mult_rad = degtorad((60.0 - 0.0) / (2.0 * N));
    area = mult_rad * area;

    /* Approximated result */
    printf("\nApproximated area according to Trapezoidal rule: %f\n", area);

    /*Actual result (ln(2)) */
    printf("Real result: %f\n", log(2.0));

    return 0;
}

/*function definition */
float degtorad(float degang)
{
    return ((M_PI * degang) / 180.0);
}