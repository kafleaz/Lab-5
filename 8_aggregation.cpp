#include<iostream>
using namespace std;
class player
{
    char name[20];
    int a;
    public:
    void getdata1()
    {
        cout<<"Enter player name and age: ";
        cin>>name>>a;
    }
    void display1()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<a<<endl;
    }
};
class play
{
    char game[20];
    int phone;
    player p;
    public:
    void getdata()
    {
        p.getdata1();
        cout<<"Enter game player plays and phone no."<<endl;
        cin>>game>>phone;
    }
    void display()
    {
        p.display1();
        cout<<"Game: "<<game<<endl;
        cout<<"Phone no.: "<<phone<<endl;
    }
};
int main()
{
    play p;
    p.getdata();
    cout<<"Player details:"<<endl;
    p.display();
    return 0;
}