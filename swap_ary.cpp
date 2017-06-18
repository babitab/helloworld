// swap two array of same size
#include<iostream>
using namespace std;
int main()
{
    int a[] = {1, 2,3,4};
    int b[] = {5,6,7,8};
    int  n = sizeof(a)/sizeof(0);
    int i;
    swap( a,b);
    cout<<"a[] is :"<<endl;
    for( i=0 ;  i<n;i++)
    {
        cout<<a[i]<<","<<endl;
    }
    cout<<"b[] is :"<<endl;
    for( i=0 ;  i<n ;i++)
    {
        cout<<b[i]<<","<<endl;
    }
 }