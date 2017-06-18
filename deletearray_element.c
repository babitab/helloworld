#include<stdio.h>
int findelement(int arr[],int n, int key );
int deleteelement(int arr[] ,int n ,int key)
{
    int pos = findelement(arr ,n ,key);
    if(pos == -1)
    {
        printf("element is not found");
        return n;
    }
  int i;
  for(i =pos  ;i < n-1 ;i++)
  arr[i] = arr[i+1];
  return n-1;
    
}
int findelement(int arr[],int n,int key)
{
    int i;
    for(i=0 ;i<n ;i++)
    if(arr[i] == key)
    return i;
    return -1;
}
int main()
{
    int arr[] = {101 ,23,45,67,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key = 23;
    int i;
    printf("before deletion :");
    for(i= 0; i < n ;i++)
    printf("%d " ,arr[i]);
   n = deleteelement(arr,n,key);
   printf("after deletion :");
   for(i =0 ;i< n;i++)
   printf("%d " ,arr[i]);
   return 0;
}