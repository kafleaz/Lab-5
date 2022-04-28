#include<iostream>
using namespace std;
class multiverse
{
    protected:
    int a;
    public:
    multiverse(int x)
    {
        a=x;
    }
};
class of
{
    protected:
    int b;
    public:
    of(int y)
    {
        b=y;
    }
};
class madness: public multiverse, public of
{
    int c;
    public:
    madness(int x, int y, int z): multiverse(x), of(y)
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
    madness m(5, 6 ,7);
    m.showdata();
    return 0;
}