#include<iostream>
using namespace std;
int main()
{
    int i,count = 0;
    char a[20];
    cout<<" enter the string :"<<endl;
    cin>>a;
    for(i=0;  a[i] != '\0'; ++i )
    {
        count++;
    }
    cout<<"string length :"<<count;
}