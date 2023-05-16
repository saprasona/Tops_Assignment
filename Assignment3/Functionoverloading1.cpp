//WAP to calculate the area of circle,rectangle and triangle using function overloading.//
#include<iostream>
using namespace std;
int area(int l,int b)    //rectangle
{
    return l*b;
}
float area(float r)    //circle
{
    return 3.14*r*r;
}
float area(float bs,float ht)    //triangle
{
    return 0.5*bs*ht;
}
int main()
{
    int l,b;
    float r,bs,ht;
    cout<<"Enter the length and breath of the Rectangle="<<endl;;
    cin>>l>>b;
    cout<<"Enter the Radius of Circle="<<endl;
    cin>>r;
    cout<<"Enter the base and height of the Triangle="<<endl;
    cin>>bs>>ht;
    cout<<"Area of Rectangle="<<area(l,b)<<endl;
    cout<<"Aeaa of Circle="<<area(r)<<endl;
    cout<<"Area of Triangle="<<area(bs,ht)<<endl;
    return 0;
}