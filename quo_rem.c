#include<stdio.h>
int main()
{
    int dividend, divisior , quotient ,remender;
    printf("enter the dividend :");
    scanf("%d",&dividend);
    printf("enter the divisor :");
    scanf("%d" ,&divisior);
    quotient = dividend / divisior;
    remender = dividend % divisior;
    printf("quotienr is %d :" ,quotient);
    printf("remender is %d :",remender);
}