#include<iostream>
using namespace std;
int main()
{
    int i,j,n = 1;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if (j < i) {
                // add a space after the n
                cout<<n<<"_";
            } else {
                // this is the last item in the row, no space after
                cout<<n;
            }
            
            n++; 
        }
        cout<<"\n";      
    }
}