#include<iostream>
 using namespace std;


 int main(){
     int arr[10],i ,j,temp;
     cout<<" enter the array element :";
     for(i=0 ;i<10;++i)
     cin>>arr[i];
     for(i=0;i<10;++i)
     {
         for(j=0;j<9;j++)
         {
             if(arr[j]>arr[j+1])
             {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;

             }
         }
     }
     for(i=0 ;i<10;++i)
     cout<<arr[i]<<" ";
 }
