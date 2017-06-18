//no argument no return value
#include<iostream>
using namespace std;
void prime();

int main()
{
    prime();
}
void prime()
{
    int i,n, flag=1;
    cout<<"enter the positive no: ";
    cin>>n;
    for(i = 2; i <= n-1; ++i)
    {
        // check if i divides n
        if((n % i) == 0)
        {
            // this is not a prime
            // break the loop
            flag=0;
            break;
        }
    }
    if (flag) {
        cout<<"Prime.\n";
    } else {
        cout<<"Not a prime.\n";
    }
}