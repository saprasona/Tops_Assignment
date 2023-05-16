//WAP to find the max number from given two numbers using friend function.// 
#include<iostream>
using namespace std;
class Numbers
{
    int x,y;
    public:
    void input()
    {
        cout<<"Enter the Two numbers=";
        cin>>x>>y;
    }
    friend void find(Numbers n);
};
void find(Numbers n)
{
    if(n.x > n.y)
    {
        cout<<"Maximum number="<<n.x;
    }
    else
    {
        cout<<"Maximum number="<<n.y;
    }
}
int main()
{
    Numbers n;
    n.input();
    find(n);
    return 0;
}