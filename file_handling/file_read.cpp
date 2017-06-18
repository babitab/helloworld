#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char ch;
    ifstream f("myfile.txt");
    while(!f.eof())
    {
        f.get(ch);
        cout<<ch;
    }
    return 0;
}