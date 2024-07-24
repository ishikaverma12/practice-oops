#include<iostream>
using namespace std;
class demo{
int a,b;
public:
demo(){
a=20;
b=5;
}//default constr

void putdata(){//function 
cout << "a" << a<<"\nb"<<b<<endl;}
};

int main()
{
    demo aa;//function call
   aa.putdata();
    return 0;

}