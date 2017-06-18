#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter three no");
    scanf("%d %d %d" ,&n1,&n2,&n3);
    if(n1>=n2 && n1>= n3)
    {
        printf("% is large no",n1);

    }
    else if(n2>=n1 && n2>=n3)
    {
        printf("%d is largest no ", n2);

    }
    else {
        printf("%d is large no",n3);
        
    }
}