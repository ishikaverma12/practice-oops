#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public: 
void putdata()
{
cout<<"\n welcome coders";
}
};
class B:public A
{
public:
void print()
{
cout << "inside b";
}
};
class C:public A
{
public: 
void input()
{
cout<<"\n inside c";
}
};

int main()
{
B cute;C me;
cute.print();cute.putdata();//cute obj 1
me.input();me.putdata();//me obj 2
getch();
}
