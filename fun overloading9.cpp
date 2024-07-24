#include<iostream>
using namespace std;
class college {
public:
    void fun()
    {
        cout<<"\nI am function with no argument";
    }
    void fun(int)
    {
        cout<<"\nI am function with int argument";
    }
    void fun(double)
    {
        cout<<"\nI am function with double argument";
    }
};
int main()
{
    college obj;
    obj.fun();
    obj.fun(5);
    obj.fun(5.5);
    return 0;
}