#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    const int MAX = 80;
    char buffer[MAX];
    ifstream
    infile("myfile.text");
    while(!infile.eof())
    {
        infile.getline(buffer , MAX);
        cout<<buffer<<endl;
    }
    return 0;
}
