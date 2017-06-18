/*  
A
BC
DEF
GHIJ
KLMNO
*/ 
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char alphabet='A';
    for(i=1; i<=5 ;++i)
    {
        for(j=1;j<=i;++j)
        {
            cout<<alphabet;
            ++alphabet;
        }
        cout<<"\n";
        
    }
}