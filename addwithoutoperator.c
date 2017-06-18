#include<stdio.h>
int add(int x, int y)
{
    return printf("%*c%*c", x, '\r', y, '\r');
}
 
int main()
{
    printf("Sum = %d\n", add(-1, 0));
    return 0;
}