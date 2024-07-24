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
class C:public B
{
public: 
void input()
{
cout<<"\n inside c";
}
};

int main()
{
C demo;//object 
demo.putdata();
demo.print();
demo.input();
getch();
return 0;
}
