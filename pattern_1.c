/*  1
    12
    123
    1234
    12345 */

#include<stdio.h>
int main()
{
    int i,j,count=0,n;
    printf("enter the row");
    scanf("%d",&n);
    for(i= 1 ;i <= n ;i++)
    {
        count=0;
        for(j=1; j<= i ;j++)
        {
            
            count++;
            printf("%d" ,count);
        }
        printf("\n");
    }
}