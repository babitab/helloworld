#include<iostream>
using namespace std;
class Complex
{
    private:
    int real ,img;
    public:
    Complex(int r = 0 ,int i = 0)
    {
        real  = r;
        img = i;
    }
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.real = real + res.real;
        res.img = img + res.img;
        return res;
    }
void print()

{
    cout<<real<<" + i"<<img<<endl;
}
};
int main()
{
    Complex c1(5 ,5);
    Complex c2(5 , 5 );
    
    Complex c3 = c1 + c2;
    c3.print();
}