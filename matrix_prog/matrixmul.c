#include <stdio.h>
#define n 4
 
// This function multiplies A[][] and B[][], and stores
// the result in C[][]
void multiply(int a[][n], int b[][n], int c[][n])
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
                c[i][j] += a[i][k]*b[k][j];
        }
    }
}
 
int main()
{
    int a[n][n] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    int b[n][n] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    int c[n][n]; // To store result
    int i, j;
    multiply(a, b, c);
 
    printf("Result matrix is \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
           printf("%d ", &c[i][j]);
        printf("\n");
    }
 
    return 0;
}

