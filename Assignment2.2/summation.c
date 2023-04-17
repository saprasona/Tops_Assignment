//WAP make a summation of given number (e.g:1523 Ans:-11)//
#include<stdio.h>
int main()
{ int i,n,sum=0;
printf("Enter the number=");
scanf("%d",&n);
while(n>0)
{
    i=n%10;
    sum=sum+i;
    n=n/10;
}
printf("Summation = %d",sum);
    return 0;
}