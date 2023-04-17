//WAP to take 10no.input from user and find out sum of odd number//
#include<stdio.h>
int main()
{int i=1,sum=0;
do
{if(i%2==1)
    {printf("\n%d",i);
    sum = sum+i;}
       i++;}
while(i<=10);
    {  printf("\nsum of odd number=%d",sum);}
    return 0;
}