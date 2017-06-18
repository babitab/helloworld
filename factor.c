#include<stdio.h>
int main()
{
    int  n,i;
    printf("enter a no");
    scanf("%d",&n);
    printf("factor of %d is " , n);
    for(i=1;i <= n;++i)
    {
        if(n%i == 0)
        {
            printf("%d",i);
        }
        
    }
}