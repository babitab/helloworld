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
    Distance(int f ,int i)
    {
        feet = f ; 
        inch = i;
    }
    //getting distance from user
    void getDist()
    {
        cout<<"enter feet : ";
        cin>>feet;
        cout<<"enter inch : ";
        cin>>inch; 
    }
    void showDist()
    {
        cout<<feet<< "ft. "<<inch<<"inch.";
    }
    int ret_feet()
    {
        return feet;
    }
    float ret_inch()
    {
        return inch;
    }
};
Distance operator+(Distance d1, Distance d2)
{
    float i = d1.ret_inch() + d2.ret_inch();
    int f = 0;
    if(i >= 12.0)
    {
        i = i - 12.0;
        f++;
    }
    f = f + d1.ret_feet() + d2.ret_feet();
    return Distance(f, i);
}
int  main()
{
    Distance d1 ,d2(4,3),d3,d4;
    d1.getDist();
    d3 = d1 + d2;
    d4 = d1 + d2 + d3;
    cout<<" Distance 1 is : ";
    d1.showDist();
    cout<<endl;
    cout<<"Distance 2 is : ";
    d2.showDist();
    cout<<endl;
    cout<<"Distance 3 is : ";
    d3.showDist();
    cout<<endl;
    cout<<"Distance 4 is : ";
    d4.showDist();
    cout<<endl;
return 0;
}
