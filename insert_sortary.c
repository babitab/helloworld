#include<stdio.h>
int binaryinsert(int arr[],int  n,int key, int capacity)
{
    if(n >= capacity)
    {
        return n;
    }
    int i;
    for(i = n-1; (i >= 0 && arr[i] > key);i--)
    arr[i+1] = arr[i];
    arr[i+1] = key;
    return (n+1);
}
int main()
{
    int arr[] =  {1,2,4,5,6,7};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int n = 6;
    int i,key = 3;
    printf("before insertion :");
    for(i = 0 ; i < n ;i++)
    printf("%d  ",arr[i]);
    n = binaryinsert(arr ,n ,key ,capacity);
    printf("after insertion ");
    for(i = 0 ;i  < n;i++)
    printf("%d ",arr[i]);
    return 0;
}