#include<stdio.h>
int main()
{
    int count=0;
    long long n;
printf("enter a no");
scanf("%lld",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("%d no of digit is:", count);

}