//WAP to find the multiplication values and the cubic values using inline function//
#include<iostream>
using namespace std;
inline int multiply(int x,int y)
{
    return x*y;
}
inline int cubic(int x)
{
    return x*x*x;
}
int main()
{
    int a,b;
    cout<<"Enter the values="<<endl;
    cin>>a>>b;
    cout<<"Multiplication values="<<multiply(a,b)<<endl;
    cout<<"Enter the values="<<endl;
    cin>>a;
    cout<<"cubic values="<<cubic(a)<<endl;
    return 0;
}