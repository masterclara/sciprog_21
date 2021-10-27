// this file contains the main function
/* to run this code, create object files through
gcc -c main.c
gcc -c mm.c
then create executable through gcc -o mmc main.o mm.o */
// Makefile (command: "make") can be used to do these steps automatically

#include <stdio.h>

int main(void)
{
    // definition of matrix dimensions
    int n = 5, p = 3, q = 4;

    // static array definition (fixed matrix size, memory space allocated during compile time)
    double A[n][p], B[p][q], C[n][q];

    // loop indices
    int i, j, k;

    // Initialize A, B and C matrices (2D arrays)
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            A[i][j] = i + j;
        }
    }

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            B[i][j] = i - j;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            // array for multiplication needs to be initialized as 0
            C[i][j] = 0.0;
        }
    }

    // Perform matrix multiplication calling matmult function from mm.c
    matmult(n, p, q, A, B, C);

    /* old way:
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < p; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    */

    // Print out matrices
    printf("\nThe matrix A:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%3.0f", A[i][j]);
        }
        printf("\n");
    }

    printf("\nThe matrix B:\n\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%3.0f", B[i][j]);
        }
        printf("\n");
    }

    printf("\nThe matrix C:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%3.0f", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}