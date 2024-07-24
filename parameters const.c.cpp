#include<iostream>
#include<conio.h>
using namespace std;
class demo{
int a,b;
public:
demo(int n,int m){
a=n;
b=m;
}//default constr

void putdata(){//function 
cout << "a" << a<<"\nb"<<b<<endl;}
};

int main()
{
    demo aa(5,10);//function call
   aa.putdata();
   getch();
    return 0;

}