#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"base constuctor "<<endl;

    }
    ~Base(){
   cout<<"base destrucotr "<<endl;

    }
};
class Derived :public Base
{
    public:
 Derived()
    {
        cout<<"derived constructor "<<endl;
    }
    ~Derived()
    {
        cout<<"derived destructor"<<endl;
    }
};
int main()
{
    Derived *d1 = new Derived();
    Base *b = d1;
 delete b;
 return 0;
}