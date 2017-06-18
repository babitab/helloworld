#include<iostream>
using namespace std;
int main()
{
    int arr[5]={ 20,10,45,93,837};
    int i, max = arr[0];
    for(i=1 ; i<5 ; ++i)
    {
        if(max<arr[i])
        max = arr[i];

    }
    cout<<"largest no is :"<<max<<endl;
} 