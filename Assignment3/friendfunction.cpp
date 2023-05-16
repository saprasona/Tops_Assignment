//WAP to swap the Two numbers using friend function without usig third variable.//
#include<iostream>
using namespace std;
class SwapNumbers
{
    private:
    int x,y;
    public:
    void getdata()
    {
        cin>>x>>y;
    }
    void setdata()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }
    friend void swap(SwapNumbers & s);
};
void swap(SwapNumbers & s)
{
    s.x=s.x+s.y;
    s.y=s.x-s.y;
    s.x=s.x-s.y;
}
int main()
{
    SwapNumbers s;
    cout<<"Enter two numbers=";
    s.getdata();
    cout<<"Before swapping="<<endl;
    s.setdata();
    swap(s);
    cout<<"After swapping="<<endl;
    s.setdata();
    return 0;
}