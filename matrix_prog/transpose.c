#include<stdio.h>
#define n 4
void transpose(int a[][n] ,int b[][n])
{
    int i,j;
    for(i = 0 ;i < n ;i ++)
    {
         for(j = 0 ; j < n ; j ++)
         b[i][j] = a[j][i];

    }
}
int main()
{
    int a[n][n] = {{1,1,1,1} ,{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int i, j;
    int b[n][n];
    transpose(a,b);
    printf("result is :");
    for(i = 0 ;i < n ; i ++ )
     {
         for(j = 0 ; j < n ;j++)
         
             printf("%d",b[i][j]);
             printf("\n");
         
     }
}