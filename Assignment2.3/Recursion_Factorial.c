//WAP to find factorial using recursion//
#include<stdio.h>
int fact(int);
int main()
{  int n;
printf("Enter the Number=");
scanf("%d",&n);
printf("Factorial is=%d",fact(n));
    return 0;
}
int fact(int n)
{  int i,f=1;
   for(i=1;i<=n;i++)
   f=f*i;
   return f;
}