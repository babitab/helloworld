#include<iostream>
using namespace std;
int main()
{
    int num,n,rem,sum = 0;
    cout<<"enter a positive no.";
    cin>>num;
    n=num;
    while(n!=0)
    {
        rem = n % 10;
        sum+= rem*rem*rem;
        n/= 10;

    }
    if(sum == num)
    
        cout <<"no is armstrong";
    else
    cout<<"no is not arm strong";
}