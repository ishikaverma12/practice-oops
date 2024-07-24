#include<iostream>
#include<conio.h>
using namespace std;
class first {
protected:
    char name[50];
    int age;
};
class second:public first 
{
    public:
    void data()
    {
    cout<<"\n hiiii";
    }
 };
 class third:public first
 {
 public:
void input() {
    cout<<"enter name: ";
    cin>>name;
    cout <<"enter age: ";
    cin>>age;
}

void putdata() {

    cout<<"\nname is: "<<name;
    cout<<"\nage is: "<<age;
 }
 };
 
    int main()
    {
        second ob;third obj;
        obj.input();
        obj.putdata();
        ob.data();
        getch();
    }