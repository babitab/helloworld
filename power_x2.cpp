#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x , n ,res;
    cout<<"enter the value of x :"<<endl;
    cin>>x;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    res = pow(x,n);
    cout<<"result is :"<<res <<endl;
    return 0;
}
int pow(int x, int n)
{
    
    if(n == 0)
    return 1;
    else if(n % 2 == 0)
    {
    int y = pow(x ,n/2);
    return (y*y);
    }
    else 
    return (x * pow(x ,n-1));
}

