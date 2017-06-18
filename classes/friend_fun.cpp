#include<iostream>
using namespace std;
class beta ;
class alpha
{
private:
int data;
public:
alpha()
{
    data = 3;
}
friend int frifun(alpha , beta);

};
class beta
{
    private:
    int data;
    public:
    beta()
    {
        data = 7;
    }
    friend int frifun(alpha , beta);

};
int frifun(alpha a,beta b)
{
    return (a.data + b.data);
}
int main()
{
    alpha aa;
    beta bb;
    cout<<frifun(aa,bb)<<endl;
    return 0;
}