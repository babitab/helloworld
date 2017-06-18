#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream 
    fin("myfile.text");
    char ch;
    ch = fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        ch = fin.get();
    }
    return 0;
}