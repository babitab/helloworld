#include<stdio.h>

#define N 4

void matrix_sub(int n, int a[][n],int b[][n],int c[][n])
{
    int i,j;
    for(i = 0 ;i < n ; i++)
    
        for(j = 0  ;j < n ;j++)
        
            c[i][j] = a[i][j] - b[i][j];
    
    
} 
int main()
{
    int a[N][N] = {{2,2,2,2},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int b[N][N] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int i,j;
    int c[N][N];
    int n = N;
    matrix_sub(N, a, b, c);
    printf("the result is :");
    for(i = 0 ; i < N ;i++)
    {
        for(j = 0 ;j < N ; j++)
        
            printf(" %d " ,c[i][j]);
            printf("\n");
        
    }
    return 0;
}