#include<iostream>
#include<conio.h>
using namespace std;
inline int square(int a)//prototype
{
    return(a*a);//fun definition
}
inline int cube(int a)
{
    return(a*a*a);
}
int main()
{
    cout<<"square is : "<<square(7);
    cout<<"\ncube is: "<<cube(2);
    getch();
    return 0;
}