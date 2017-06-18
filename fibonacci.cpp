#include<iostream>
using namespace std;
 int main()
 {
     int i,n,first=0 ,second=1 , next;
     cout<<"enter the no of trems of serise : ";
     cin>>n;
     cout<<"fibonacci seriese is: ";
     for(i=1; i <=n ; i++)
     {
         cout<<"\n"<<first;
         next = first + second;
         first = second;
         second =  next;
     }
 }