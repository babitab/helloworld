#include<stdio.h>

void swap(int * ,int *);


int main()
{
    int n1 , n2;
    printf("enter the no. :");
    scanf("%d %d",&n1,&n2);
    swap(&n1, &n2);
    printf(" enter the no after swap %d %d:",n1 ,n2);
}
void swap(int* a, int* b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

