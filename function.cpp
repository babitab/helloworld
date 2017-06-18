#include<iostream>
using namespace std;

// sum takes two integer and return a integer (sum of two arguments)
int sum(int, int);

int main()
{
    // x holds the first value, y second
    // z holds the result of the sum
    int x, y, z;

    // ask for two numbers
    cout<<"enter the two no: ";
    cin>>x>>y;

    // get the sum
    z = sum(x, y);
    cout<<"sum is"<<z;
   return 0;
}

int sum(int a , int b)
{
    return (a + b);
}


