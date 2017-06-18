#include<iostream>
using namespace std;

class Reactangle
{
    public:
    int publicArea(int l, int w)
    {
        return l * w;
    }

    static int staticArea(int l, int w) {
        return l * w;
    }

    const int constArea(int l, int w) {
        return l * w;
    }
};

int main () {
    Reactangle reactAngle;
    cout<<reactAngle.publicArea(2,3)<<"\n";
    cout<<reactAngle.constArea(2,3)<<"\n";
    cout<<Reactangle::staticArea(2,3)<<"\n";
}