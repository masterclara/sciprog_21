// compile in sciprog using gcc -lm -o hyperarctan hyperarctan.c

#include <stdio.h>
#include <math.h>

// function declaration
double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main(void)
{
    // request user input for precision for the Maclaurin series
    double precision;
    printf("Please enter precision for the Maclaurin series:\n");
    scanf("%lf", &precision);

    // request user input for start and end points
    double begin, end;
    printf("Please enter the start and finish points for x:\n");
    scanf("%lf, %lf", &begin, &end);

    // create an array with the required size a
    double a = ((fabs(begin) + fabs(end)) / precision) + 1.;
    int asize = a;

    double tan1[asize];
    double tan2[asize];

    double i;
    int j = 0;

    // for loop in steps of the defined precision
    for (i = begin; i <= end; i += precision)
    {
        tan1[j] = arctanh1(i, precision);
        tan2[j] = arctanh2(i);
        printf("The difference betweeen tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n", i, i, fabs(tan1[j] - tan2[j]));
        j++;
    }

    return 0;
}

// first arctanh function
double arctanh1(const double x, const double delta)
{
    double arcTan = 0;
    double element;
    int n = 0;

    // loop to perform calculations as long as element >= delta
    do
    {
        double val = 2 * n + 1;
        element = pow(x, val) / val;
        arcTan += element;
        n++;

    } while (fabs(element) >= delta);

    return arcTan;
}

// second arctanh function
double arctanh2(const double x)
{
    return (log(1 + x) - log(1 - x)) / 2;
}
