#include<stdio.h>
void reverse(int arr[], int start ,int end)
{
    int temp;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{   
    int arr[] = {1,2,3,34, 5 ,45};
    int n = sizeof(arr) /sizeof(int);
    int i;
    for(i = 0 ;i < n ;i++)
    {
        printf("%d ",arr[i]);
    }
    reverse(arr , 0 ,5);
    printf("reverse array is ");
    for(i = 0 ;i < n ;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}