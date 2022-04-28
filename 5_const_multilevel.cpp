#include<iostream>
using namespace std;
class I
{
    protected:
    int a;
    public:
    I(int x)
    {
        a=x;
    }
};
class am: public I
{
    protected:
    int b;
    public:
    am(int y, int x):I(x)
    {
        b=y;
    }
};
class groot: public am
{
    int c;
    public:
    groot(int x, int y, int z): am(y,x)
    {
        c=z;
    }
    void showdata()
    {
        cout<<"x: "<<a<<endl;
        cout<<"Y: "<<b<<endl;
        cout<<"Z: "<<c<<endl;
    }
};
int main()
{
    groot g(5, 6 ,7);
    g.showdata();
    return 0;
}