#include<iostream>
using namespace std;

int main()
{
    int n ,fact=1,i;
    cout<<"enter a no";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
        cout<<n<<"factorial no is"<<fact;
    

}