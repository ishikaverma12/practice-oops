#include<iostream>
using namespace std;
class base {
public:
    void display() {
        cout<<"i am fun of display base class\n";
    }
    void message() {
        cout<<"i am fun of message base class\n";
    }
};
class derived:public base {
    virtual void display() {
        cout<<"i am fun of display base class\n";
    }
    void message() {
        cout<<"i am fun of message base class\n";
    }
};
int main()
{
    base *baseptr;
    derived d;
    baseptr=&d;
    baseptr->display();
    baseptr->message();
    return 0;
}