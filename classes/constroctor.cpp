#include<iostream>
using namespace std;
class Box
{
    private:
    double length;
    double width;
    double height;
    public:
    Box()
    {
        cout<<"const called :";
    }
    Box(double l = 2.0 , double h = 2.0 , double w = 0)
    {
        cout<<"const called :";
        length = l;
        width = w ;
        height = h;
    }
    void volume()
    {
        int result;
        result =  length*height*width;
    }
    void display()
    {
        cout<<"area is : "<<result;
    }
};
    int main()
    {
        Box b1,b2;
        Box *ptr;
        ptr = &b1;
        ptr  = &b2;
        ptr->volume(2,3,4);
        b2.volume();
        b1.display();
        b2.dispaly();
    }

