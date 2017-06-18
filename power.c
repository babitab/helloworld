#include<stdio.h>
int main()
{
    int base ,exponenet;
    long long result=1;
    printf("enter the base :");
    scanf("%d",&base);
    printf("enter the exponent value :");
    scanf("%d" ,&exponenet);
    while(exponenet!=0)
    {
        result *= base;
        --exponenet;
    }
    printf("power of element %lld:" ,result);
}