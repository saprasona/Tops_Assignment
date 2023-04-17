//WAp to print table up to given numbers//
#include<stdio.h>
void mul(int n);
void main()
{ int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    mul(n);
}
void mul(int n)
{for(int i=1;i<=10;i++)
{printf("%d\n",i*n);}
}
