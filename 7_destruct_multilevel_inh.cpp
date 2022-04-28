#include<iostream>
using namespace std;
class I
{
    public:
    ~I()
    {
        cout<<"Class I destructor."<<endl;
    }
};
class am
{
    public:
    ~am()
    {
        cout<<"Class am destructor."<<endl;
    }
};
class groot: public I, public am
{
    public:
    groot()
    {
        cout<<"Class groot destructor."<<endl;
    }
};
int main()
{
   {
        groot g;
   }
    return 0;
}