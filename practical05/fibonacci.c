#include <stdio.h>

int userinput(void);
int fibonacci(int fn1, int fn2);

int main(void)
{
    // declare variables
    int n, f0, f1;

    // assign initial values
    f0 = 0;
    f1 = 1;

    // request user input of n
    n = userinput();

    // create array for Fibonacci series
    int Fib[n];

    Fib[0] = 0;
    Fib[1] = 1;

    // Fibonacci series loop
    for (int i = 2; i <= n; i++)
    {
        Fib[i] = fibonacci(Fib[i - 1], Fib[i - 2]);
        printf("T[%d] = %f (f(x) at n = %d)\n", i, Fib[i], i);
    }
}

// function to request user input of n
int userinput(void)
{
    int n;
    printf("Please enter an integer here:\n");
    scanf("%d", &n);
    return n;
}

int fibonacci(int fn1, int fn2)
{
    int Fn = fn1 + fn2;

    return Fn, fn1;
}