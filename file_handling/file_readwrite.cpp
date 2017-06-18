#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char data[100];

    ofstream outfile;
    
    outfile.open("text.dat");
    
    cout<<"writing the file :"<<endl;

    
    cout<<"enter your name "<<endl;
    
    cin.getline(data,100);
    
    outfile<<data<<endl;
    
    cout<<"enter your age "<<endl;
    
    cin>>data;
    
    cin.ignore();
    
    outfile<<data<<endl;
    
    outfile.close();
    
    ifstream infile;
    
    infile.open("text.dat");
    
    cout<<"reading from file "<<endl;
    
    infile>>data;
    
    cout<<data<<endl;
    
    infile>>data;
    
    cout<<data<<endl;
    
    infile.close();
return 0;
}