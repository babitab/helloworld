#include<stdio.h>
int main()
{
    int i,n;
    unsigned long  long factorial=1;
    printf("enter a no");
    scanf("%d",&n);
    // chek negative no
    if(n<0)
    {
        printf("negetive no exits");

    }
    else
    for(i=1;i<=n;++i)
    {
        factorial *= i;
        printf("\n");
        printf("Factorial of %d = %llu", n, factorial);
    }
}