//WAP to take 10no.Input from user and find out..sum of even number//
#include<stdio.h>
int main()
{int i=1,sum=0;
do
{if(i%2==0)
    {printf("\n%d",i);
    sum=sum+i;}
    i++;}
while(i<=10);
    {printf("\ntotal sum=%d",sum);}
    return 0;
}