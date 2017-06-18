#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    float inch;
    public:
    int result;
    int setdist(int f, float i)
    {
        feet = f;
        inch = i;
       
        return 0;
    }
    void getdist()
    {
        cout<<"distance is :" <<feet<<"-"<<inch<<endl;
    }
    
};
int main()
{
    Distance *d1 = new Distance();
    d1->setdist(1,2.2);
    d1->getdist();

    Distance d2;
    d2.setdist(1,2.2);
    d2.getdist();
}