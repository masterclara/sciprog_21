// compile in sciprog using gcc -o fibonacci fibonacci.c

#include <stdio.h>

int userinput(void);
int fibonacci(int fn1, int fn2);

int main(void)
{
    // declare variables
    int n, i, j;

    // request user input of n
    n = userinput();

    // create array for Fibonacci series
    int Fib[n];

    Fib[0] = 0;
    Fib[1] = 1;

    // Fibonacci series loop
    for (i = 2; i <= n; i++)
    {
        Fib[i] = fibonacci(Fib[i - 1], Fib[i - 2]);
    }

    // print fibonacci series
    printf("The Fibonacci series F(n) up to n = %d is:\n", n);
    for (j = 0; j <= n; j++)
    {
        printf("F[%d] = %d at n = %d\n", j, Fib[j], j);
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

    return Fn;
}