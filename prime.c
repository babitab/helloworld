#include<stdio.h>
int main()
{
    int i,flag=0,n;
    printf("enter a positive no.");
    scanf("%d",&n);
    for(i=2 ; i <= n/2; ++i)
    {
         if(n%i==0)
    {
        flag=1;
        break;
    }
    }
    if(flag==0)
    {
        printf("prime no");

    }
    else
    {
        printf("not prime no");
    }
}