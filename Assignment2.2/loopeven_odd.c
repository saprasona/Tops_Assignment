//WAP to take 10no.input from user and find out how many even or odd number//
#include<stdio.h>
int main()
{ int n,i;
for(i=1;i<=10;i++)
{if(i%2==0)
{printf("%d\n",i);}}

for(i=1;i<=10;i++)
{if(i%2!=0)
{printf("%d\n",i);}}
    return 0;
}