#include<iostream>
using namespace std;
 int sum(int arr[])
 {
    int sum=0;
    int i;
    int n = sizeof(arr)/sizeof(0);
   
    for(i=0;i<n;i++)
        sum += arr[i];
        
    return sum;

}

int main()
{
int arr[] ={1 ,2 ,3 ,4, 5, 6,7};


cout<<"sum of all array element :"<<sum(arr);
}
