#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3,s4,s5,total=500,sum;
    float per;
    cout<<"enter the five subjects marks"<<"\n";

    cin>>s1>>s2>>s3>>s4>>s5;

    sum=s1+s2+s3+s4+s5;
    per=sum*100/total;
    if(per>=60)
    {
        cout<<"first division"<<per<<endl;
    }
    else if(per<=50 && per>40 )
    {
        cout<<"second division:"<<per<<endl;

    }
    else if(per<=40 && per>30)
    {
        cout<<"third division:"<<per<<endl;
    }
    else
    {
        cout<<"fail"<<endl;
    }
}