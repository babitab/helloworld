#include<iostream>
using namespace std;
int main()
{
    char o;
    int num1 , num2;
    cout<<"enter the opertaor : +, -, * /";
    cin>>o;
    cout<<"enter the two operend";
    cin>>num1>>num2;

    switch(o)
    {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
        case'-':
        cout<<num1<<'-'<<num2<<'='<<num1-num2;
        break;
        case '*':
        cout<<num1<<'*'<<num2<<'='<<num1*num2;
        break;
        case '/':
        cout<<num1<<'/'<<num2<<'='<<num1/num2;
        break;
        default:
        cout<<"wrong key entered";
        
    }
}