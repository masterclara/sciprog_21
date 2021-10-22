#include <stdio.h>

int main(void)
{
    int i;
    double a;

    // request user input of i, a
    printf("Enter an int and a double, separated by (,)\n");
    scanf("%d, %lf", &i, &a);
    printf("You have entered %d, and %lf\n", i, a);

    int *pointer_to_i = &i;
    printf("The value i is %d\n", i);
    printf("The value i is also %d\n", *pointer_to_i);
    printf("The address of i is %d\n", &i);

    return 0;
}
