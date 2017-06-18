//inheritence
#include<iostream>
using namespace std;
class Counter
{
    protected:
    unsigned int count;
    public: 
    Counter()
    {
        count = 0;
    }
    Counter(int c)
    {
        count = c;
    }
    unsigned int get_count() const
    {
        return count ;
    }
Counter operator ++ ()
{
    return Counter (++count);
}
};
class CountDn : public Counter
{
public:
CountDn()
{
    count = 10;
}
CountDn(int c)
{
    count = c;
}
CountDn operator --()
{
    return CountDn(-- count);
}
};
int main()
{
    CountDn c1 ,c2;
    ++c1;
    ++c1;
    ++c1;
    cout<<"c1 is increment :"<<c1.get_count()<<endl;
--c2;
cout<<"c2 is decrement :"<<c2.get_count()<<endl;
return 0;
}




