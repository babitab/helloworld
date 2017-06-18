#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int x, n ,result;
    cout<<"enter the value of x :"<<endl;
    cin>>x;
    cout<<"enter the value of n :" <<endl;
    cin>>n;
    result = pow(x,n);
    cout<<"result is :"<<result<<endl;
    return 0;
}
int  pow(int x ,int n)
{
    if(n == 0)
    return 1;
    else
    return (x * pow(x, n-1));
}