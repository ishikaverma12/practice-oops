#include<iostream>
#include<conio.h>
using namespace std;
class first {
protected:
    char name[50];
};
class second:public first
{
    public:
    int age;
void input() {
    cout<<"enter name: ";
    cin>>name;
    cout <<"enter age: ";
    cin>>age;
}

void putdata() 
{
    cout<<"name is: "<<name;
    cout<<"age is: "<<age;
 }
 };
    int main()
    {
        second ob;
        ob.input();
        ob.putdata();
        getch();
    }