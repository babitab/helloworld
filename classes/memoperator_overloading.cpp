#include<iostream>

using namespace std;

 
class Distance
{
    private:
    int feet;
    float inch;
    public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f ,float i)
    {
        feet = f;
        inch = i;
    }
    void getdist()
    {
        cout<<"enter the feet :";
        cin>>feet;
        cout<<"enter the inch :";
        cin>>inch;
    }
    void showdist()
    {
        cout<<feet<<"-"<<inch;
    }
    bool operator < (Distance);
    
};
bool Distance :: operator < (Distance d2)
{
    float bf1 = feet + inch/12;
    float bf2 = d2.feet + d2.inch/12;
    return ((bf1<bf2) ? true : false);
}
int main()
{
    Distance d1;
    d1.getdist();
    Distance();
    Distance d2(6,2.4);
    cout<< "dist d1 =";
    d1.showdist();
    cout<<"dist d2 = ";
    d2.showdist();
    if(d1<d2)
    cout<<"\n dist d1 is less than d2 ";

else

cout<<"\n dist d1 is grater than d2 ";
}