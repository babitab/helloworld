#include<stdio.h>
#define n 3
int matrix_sum(int a[][n], int b[][n] , int c[][n])
{
    int i,j;
    for(i=0 ; i < n ;i++)
    {
        for(j=0 ; j < n ; j++)
        c[i][j] = a[i][j]+ b[i][j] ;

    }
}
int main()
{
    int a[n][n] = {{1,1,1},{2,2,2},{3,3,3}};
    int b[n][n] = {{1,1,1},{2,2,2},{3,3,3}};
    int c[n][n],i,j;
    matrix_sum(a,b,c);
    printf("result is :");
    for(i = 0 ;i < n; i++)
    {
     for(j = 0 ;j < n ;j++)
     printf("%d", c[i][j]);
     printf("\n");
    }
     return 0;
     
}