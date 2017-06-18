#include<stdio.h>
int binarysearch(int arr[], int low, int high, int key)
{
    int i;
    if(high < low)
    return -1;
    int mid;
    mid = (low + high)/2;
    if(key== arr[mid])
    
        return mid ;

  if(key> arr[mid])
  return binarysearch(arr,(mid+1),high,key);
return binarysearch(arr ,low,(mid-1),key);
}
int main()
{
int arr[] = {1,2,3,34,50,67};
int n,key;
n = sizeof(arr)/sizeof(arr[0]);
key = 34;
printf("%d \n ",binarysearch(arr ,0 ,n ,key));
return 0;
}