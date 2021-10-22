// compile in sciprog using gcc -o fibonacci fibonacci.c

#include <stdio.h>

void fibo(int *a, int *b);

int main(void)
{
    // request user input of n
    int n;
    printf("Please enter an integer here:\n");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Number less than 1\n");
        // exit(1);
    }

    // first two elements of Fibonacci sequence
    int n1 = 0;
    int n2 = 1;

    // print first element of Fibonacci sequence
    printf("The Fibonacci sequence is: \n");
    printf("%d, ", n1);

    int i;

    // Fibonacci squence loop (up to n-1)
    for (i = 1; i < n - 1; i++)
    {
        fibo(&n1, &n2);
        printf("%d, ", n1);
    }

    // last element of Fibonacci sequence
    fibo(&n1, &n2);
    printf("%d\n", n1);

    return 0;
}

// fibonacci function with pointers (from practical 5)
void fibo(int *a, int *b)
{
    int next;
    next = *a + *b;
    *a = *b;
    *b = next;
}