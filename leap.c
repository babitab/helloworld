#include<stdio.h>
int main()
{
     int year;
     printf("enter a year");
scanf("%d",&year);
if(year%4==0)
{
    printf("%d is leap year",year);

}
else
{
    printf("not leap year");
}
}