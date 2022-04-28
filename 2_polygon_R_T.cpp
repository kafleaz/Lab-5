#include<iostream>
using namespace std;
class triangle
{
    int l,b;
    public:
    void getdatat()
    {
        cout<<"Enter l and b: ";
        cin>>l>>b;
    }
    int setdatat()
    {
        return (l*b/2);
    }
};
class rectangle
{
    int l,b;
    public:
    void getdatar()
    {
        cout<<"Enter l and b: ";
        cin>>l>>b;
    }
    int setdatar()
    {
        return (l*b);
    }
};
class polygon: public triangle, public rectangle
{
    public:
    void getdata()
    {
        cout<<"For Triangle."<<endl;
        getdatat();
        cout<<"For Rectangle."<<endl;
        getdatar();
    }
    void display()
    {
        cout<<"Area of triangle: "<<setdatat()<<endl;
        cout<<"Area of rectangle: "<<setdatar()<<endl;
    }
};
int main()
{
    polygon p;
    p.getdata();
    p.display();
}