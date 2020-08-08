#include<iostream>
using namespace std;

class Parent
{
public:
    virtual void marry()=0;
};

class Child: public Parent
{
public:
    void marry()
    {
        cout<<"marry with pink girl/boy"<<endl;
    }
};
class jChild: public Child
{
public:
    void marry()
    {
        cout<<"marry with white girl/boy"<<endl;
    }
};


int main()
{
    Parent *ptr;
    Child c;
    jChild j;
    ptr=&c;
    ptr->marry();
    ptr=&j;
    ptr->marry();

    return 0;
}
