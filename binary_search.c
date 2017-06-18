#include<stdio.h>
int binarysearch(int arr[] ,int low ,int high ,int key)
{
  if(high >= low)
  {
  int mid = (low + high)/2;
  if(arr[mid] == key)
    return mid;
    if(arr[mid] > key)
      return binarysearch(arr , low ,(mid-1),key);
  return binarysearch(arr ,(mid+1),high,key);

}
return -1;
}
int main()
{
    int arr[] = {10,20,30,40,60,50,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 40;
    int result = binarysearch(arr , 0 , n-1 ,key);
    (result == -1)?printf("element not found ") :printf("elemnet is %d",result);
    return 0;
}