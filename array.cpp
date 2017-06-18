//displaying 5 students marks using function
#include<iostream>
using namespace std;
void display(int mark[5])
int main()
{
    int mark[5]={78,86,95,84,79};
    display(mark);
    return 0;
}
void display(int mark[5])
{
cout<<"5 students marks :"<<endl;
for(int i=0 ;int i<=5 ;i++)
{
cout<<"student "<<i+1<<mark[i];
}
}
