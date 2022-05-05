#include<iostream>
using namespace std;
class polygon
{
    protected:
    int l,b;
    public:
    void datain()
    {
        cout<<"Enter l and b: ";
        cin>>l>>b;
    }
};
class triangle:public polygon 
{
    public:
    void setdatat()
    {
        datain();
        cout<<"Area of triangle: "<<(l*b/2)<<endl;
    }
};
class rectangle: public polygon
{
    public:
    void setdatar()
    {
        datain();
        cout<<"Area of rectangle: "<<(l*b)<<endl;
    }
};
int main()
{
    triangle t;
    rectangle r;
    t.setdatat();
    r.setdatar();
}