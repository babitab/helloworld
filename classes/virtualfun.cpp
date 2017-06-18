#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show() ;
    {
        cout<<"base"<<endl;
    }

};
class Derived1: public Base{
   public:
   void show()
   {
       cout<<"Derived1 "<<endl;
   }
};
class Derived2: public Base{
    public:
    void show()
    {
        cout<<"Derived2 \n";
    }
};
int  main()
{
    Derived1 d1;
    Derived2 d2;
    Base *ptr;
    Base b;
   
    b.show();
    ptr= &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();
    return 0;

}