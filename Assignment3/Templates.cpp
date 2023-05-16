//WAP of to swap the two values using templates.//
#include<iostream>
using namespace std;
template<class T>
int swapNumbers(T & x,T & y)
{
    T t;
    t=x;
    x=y;
    y=t;
    return 0;
}
int main()
{
    int a,b;
    cout<<"Enter the values=";
    cin>>a>>b;
    cout<<"Before swapping x="<<a<<" y="<<b<<endl;
    swapNumbers(a,b);
    cout<<"After swapping x="<<a<<" y="<<b<<endl;
    return 0;
}