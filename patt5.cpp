#include<iostream>
using namespace std;

// sample output
/**
A
AB
ABC
ABCD
.....
*/
int main()
{
    int n=5, i, j;
    char c;
    for(i=1;i<=5;++i)
    {   
        c = 'A';
        for(j = 1; j <= i; ++j, c++)
            cout<<c;
        cout<<endl;
    }
}