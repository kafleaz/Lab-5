#include<iostream>
using namespace std;
class add
{
    int x, y;
    public:
    void getdataa()
    {
        cout<<"For addition enter x and y: ";
        cin>>x>>y;
    }
    void displaya()
    {
        int z;
        z=x+y;
        cout<<"Addition: "<<z<<endl;
    }
};
class sub:public add
{
    int x,y;
    public:
    void getdatas()
    {
        getdataa();
        cout<<"For subtraction enter x and y: ";
        cin>>x>>y;
    }
    void displays()
    {
        int z;
        displaya();
        z=x-y;
        cout<<"Subtraction: "<<z<<endl; 
    }
    
};
class mul:public sub
{
    int x,y;
    public:
    void getdatam()
    {
        getdatas();
        cout<<"For Multiplication enter x and y: ";
        cin>>x>>y;
    }
    void displaym()
    {
        int z;
        displays();
        z=x*y;
        cout<<"Multiplication: "<<z<<endl; 
    }
};
class divi :public mul
{
    int x,y;
    public:
    void getdatad()
    {
        getdatam();
        cout<<"For Division enter x and y: ";
        cin>>x>>y;
    }
    void displayd()
    {
        int z;
        displaym();
        z=x/y;
        cout<<"Division: "<<z; 
    }
    
};
int main()
{
    divi d;
    d.getdatad();
    d.displayd();
}