#include<iostream>
using namespace std;
int main()
{
    int i,j,row;
    cout<<"entr the row";
    cin>>row;
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        cout<<"*";
    

    cout<<"\n";
    }
}