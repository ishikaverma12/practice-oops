#include<iostream>
using namespace std;
class base {
public:
  virtual void display() {
        cout<<"i am fun of display base class\n";
    }
  virtual  void message() {
        cout<<"i am fun of message base class\n";
    }
};
class derived:public base {
     void display() {
        cout<<"i am fun of display dervied class\n";
    }
    void message() {
        cout<<"i am fun of message derived  class\n";
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