#include<iostream>
using namespace std;
class person
{
    char name[20];
    int id;
    public:
    void getdatap()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Id: ";
        cin>>id;
    }
    void dispalyp()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Identity: "<<id<<endl;
    }
};
class student : public person
{
    int grade, address;
    public:
    void getdatas()
    {
        getdatap();
        cout<<"Grade: ";
        cin>>grade;
        cout<<"Address: ";
        cin>>address;
    }
    void dispalys()
    {
        dispalyp();
        cout<<"Grade: "<<grade<<endl;
        cout<<"Address: "<<address;
    }
};
int main()
{
    student s;
    cout<<"Enter following data."<<endl;
    s.getdatas();
    cout<<"Data are,"<<endl;
    s.dispalys();
    return 0;
}