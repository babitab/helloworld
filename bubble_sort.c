#include<stdio.h>

void bubblesort(int arr[] , int n)
{
    int i, j ,temp;
    for(i = 0; i < n; i++)
    {
        for(j = i; j < n - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }  
}

int main()
{
    int  arr[] = {1,3,57,4,56,8,9,35};
    int n = sizeof(arr) /sizeof(arr[0]);
    bubblesort(arr,n);
    int j;
    for(j= 0 ;j < n ;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}