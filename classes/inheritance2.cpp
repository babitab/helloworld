#include<iostream>
using namespace std;
enum posneg {pos ,neg};
class Distance
{
    protected:
    
        int feet;
        float inch;
  public:
  Distance()
  {
      feet = 0;
      inch = 0.0;
  }
  Distance(int ft ,float in)
  {
      feet = ft;
      inch = in;
  }
  void getdist()
  {
      cout<<"enter the feet "<<endl;
      cin>>feet;
      cout<<"enter the inch "<<endl;
      cin>>inch;
  }
  void showdist() const
  {
      cout<<"("<<feet<<"-"<<inch<<")";
  }

};
class DistSign : public Distance
{
    private:
    posneg sign;
    public:
    DistSign() : Distance()
    {
        sign = pos;
    }
    DistSign(int ft ,float in, posneg sg = pos):Distance(ft ,in)
    {
        sign = sg;
    }
    void getdist(){
        Distance :: getdist();
        char ch;
        cout<<"enter sign(+ or -) :";
        cin>>ch;
        sign = (ch=='+')?pos :neg;
    }
void showdist()
{
cout<<((sign == pos)?"+":"-");
Distance :: showdist();
}
} ;
int main()
{
    DistSign alpha;
    alpha.getdist();
    DistSign beta(10,1.2);
    DistSign gama(12,3.4,neg);
    cout<<"\n alpha = ";alpha.showdist();
    cout<<"\n beta = ";beta.showdist();
     cout<<"\n gama = ";gama.showdist();
     cout<<endl;
return 0;
}