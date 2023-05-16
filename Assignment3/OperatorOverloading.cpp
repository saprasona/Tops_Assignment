//WAP of Two 1D Matrix Addition using Operator Overloading//
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void accept();
    void display();
    void operator + (Matrix x);
};
void Matrix::accept()
{
    cout<<"Enter the Matrix Element (3*3)="<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cin>>a[i][j];
        }
    }
}
void Matrix::display()
{
    for(int i=0;i<3;i++)
    {
        cout<<" ";
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void Matrix::operator+(Matrix x)
{
    int mat[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            mat[i][j]=a[i][j]+x.a[i][j];
        }   
    }
    cout<<"Addition of Matrix="<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<" ";
        for(int j=0;j<3;j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
int main()
{
    Matrix m,n;
    m.accept();
    n.accept();
    cout<<"First Matrix="<<endl;
    m.display();
    cout<<"Second Matrix="<<endl;
    n.display();
    m+n;
    return 0;
}
