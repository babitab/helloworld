#include<stdio.h>
int findelement(int arr[] , int n ,int key)
{
    int i;
    for(i = 0 ; i < n ;i++ )
    
       if(arr[i] == key)
       return i;
       
       return -1;
    
}
int main()
{
    int arr[] = {23,25,56,67,84,89};
    int n;
    n = sizeof(arr)  / sizeof(arr[0]);
    int key = 25;
    int position = findelement(arr ,n,key);
    
    if(position == -1)
    printf("element is not found ");
    else
    printf("element is found %d ",position+1);
    return 0;

}