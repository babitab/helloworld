#include<iostream>
using namespace std;
int main()
{
    int i, n, j;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" number. ";
    for (i = 0; i < n; i++) cin>>arr[i];

    for(i=0 ;i < n; ++i)
    {
        if(arr[i] % 2 == 0)
            cout<<"even no are :"<<arr[i]<<"\t";
    }
    cout<<"\n";
}