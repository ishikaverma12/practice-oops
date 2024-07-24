#include<iostream>
using namespace std;
class abc {
    int a,b;
public:
    friend void display(abc);
};
void display(abc obj)
{
    obj.a=200;
    obj.b=400;
    cout<<"\na is "<<obj.a;
    cout<<"\nb is "<<obj.b;
}

int main()
{
    abc obj1;
    display (obj1);
}