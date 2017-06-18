#include<iostream>
using namespace std;
const int len =80;
class Student
{
    private:
    char school[len];
    char degree[len];
    public:
    void getedu()
    {
        cout<<"enter  name of school or university :";
        cin>>school;
        cout<<"enter teh degree earned :";
        cin>>degree;
    }
    void putedu() const
    {
        cout<<"\n school or university :"<<school;
        cout<<"\n highest degree :" <<degree;
    }
};
class Employee
{ 
    private:
    char name[len];
unsigned long number ;
public:
void getdata()
{
    cout<<"enter the name :"<<endl;
    cin>>name;
    cout<<"enter number :"<<endl;
    cin>>number;
}
void putdata() const
{
    cout<<"\n name :"<<name;
    cout<<"\n number :"<<number;

}
};
class Manager : private Employee , private Student
{
    private:
    char title[len];
    double dues;
    public:
    void getdata()
    {
        Employee :: getdata();
        cout<<"enter title :";
        cin>>title;
        cout<<"enter golf dues :" ;
        cin>>dues;
        Student :: getedu();
     }
     void putdata() const
     {
         Employee :: putdata();
         cout<<"\n title :"<< title;
         cout<<"\n golf club dues :"<<dues;
         Student :: putedu();
     }
};
class Scientist :private Employee ,private Student
{
    private:
    int pubs;
    public:
    void getdata()
    {
        Employee :: getdata();
        cout<<"enter the pubs : "<<endl ;cin>>pubs ;
        Student :: getedu();
    }
    void putdata() const
    {
        Employee :: putdata();
        cout<<"\n number the publication :" <<pubs;
        Student :: putedu();
    }
};
class Laborer :public Employee
{

};
int main(){
    Manager m1 ; Scientist s1 , s2 ; Laborer l1;
    cout<<endl;
    cout<<"enter the data for manager :";
    m1.getdata();
    cout<<"enter the data for scientist 1 :"<<endl;
    s1.getdata();
    cout<<"enter the data for scientist 2:"<<endl;
    s2.getdata();
    cout<<"enter the data for laborer :"<<endl;
    l1.getdata();
    cout<<"\n data of maneger :";m1.putdata();
     cout<<"\n data ofscitentist 1 :";s1.putdata();
      cout<<"\n data ofscitentist 2 :";s2.putdata();
       cout<<"\n data of laborer :";l1.putdata();
cout<<endl;
return 0;

}
