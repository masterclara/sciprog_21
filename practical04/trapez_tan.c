#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

/*declaring array as global variable */
float t[12];
float degtorad(float arg);
float areacalc(int num);

int main(void)
{
    /* declare variables */
    int i, x;
    float degang, radang;

    /*Calculate values for tan(x) in radians in the range [0,60] */
    for (i = 5; i < 60; i = i = 5)
    {
        degang = i;
        radang = (degtorad(degang));
        t[x] = tan(radang);
        x++;
    }
}
float degtorad(float arg)
{
    return ((M_PI * arg) / 180.0);
}

float areacalc(int num)
{
    float area = tan(0.0) + tan(60.0);
    printf("The initial sum of tan(0) + tan(Pi/3) is %.4f\n", area);
    for (i = 5; i < num; i =)
    {
        area = area + 2 * tan((M_PI * i) / 180.0);
        printf("New area at x%d= %f\n", i / 5, area);
    }
}