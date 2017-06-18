#include<iostream>
using namespace std ;

class person
{
    protected:
    char name[40];

    public:
    void getname()
    {
        cout<<"enter the name :";
        cin>>name;

    }
    void putname()
    {
        cout<<"name :"<<name<<endl;
    }
    virtual void getdata() = 0;
    virtual bool isoutstanding() = 0;
};
class student:public person 
{
    private:
    float gpa;
    public:
    void getdata()
    {
        person::getname();
        cout<<"enter student gpa :";
        cin>>gpa;
    }
    bool isoutstanding()
    {
        return (gpa > 3.5) ? true : false;
    }
};
class professor:public person 
{
    private:
    int numpubs;
    public:
    void getdata()
    {
        person::getname();
        cout<<" enter number of professor publication :";
        cin>>numpubs;
    }
    bool isoutstanding()
    {
        return (numpubs > 100) ? true : false;
    }

};
int main()
{
    person *persptr[100];
    int n = 0;
    char choice;
    do
    {
        cout<<"enter the student or professor (s or p):";
        cin>>choice;

        if(choice == 's') {
            persptr[n] = new student();
            persptr[n]->getdata();
        } else if (choice == 'p') 
        {
            persptr[n] =  new professor;
            persptr[n]->getdata();
        }
        n++;
        cout<<"Do you want to add more (y/n)?";
        cin>>choice;
    } while(choice == 'y');

    // now print
    for(int j = 0; j < n; j++)
    {
        persptr[j]->putname();
        if(persptr[j]->isoutstanding())
            cout<<" this is outstanding ";
    }
return 0;
}

