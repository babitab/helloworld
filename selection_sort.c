#include<stdio.h>
void swap(int *x , int *y )
{
    int temp = *x;
    *x = *y ;
    *y = temp;
}
void selectionsort(int arr[], int n)
{
    int i, j ,min;
    for(i = 0 ;i < n-1  ;i++)
    {
        min = i;
        for(j = i+1 ;j < n;j++)
        if(arr[j] < arr[min])
        min = j;
        swap(&arr[min] , &arr[i]);  
    }
}
void print(int arr[] ,int size)
{
    int i;
    for(i  = 0 ;i < size ;i++)

    printf("%d ",arr[i]);
}
int main()
{
 int arr[] = {1,2,5,7,3,9,8};
 int n = sizeof(arr) / sizeof(arr[0]);
 selectionsort(arr,n);
 print(arr , n);
 return 0;
 }