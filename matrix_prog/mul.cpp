#include<iostream>
using namespace std;
int  main()
{
    int table ,i,range;
    cout<<"enter the table ";
    cin>>table;
    cout<<"enter the range";
    cin>>range;
    for(i=1;i<=range;++i)
    {
        cout<<table<<"*"<<i<<"="<<table*i<<endl;
    }
}