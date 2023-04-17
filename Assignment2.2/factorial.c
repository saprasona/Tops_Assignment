//WAP to print factorial of given number//
#include<stdio.h>
int main()
{  int n,i,fact=1;
printf("Enter the Number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{     fact=fact*i;
}
  printf("Factorial of %d is =%d",n,fact);  
    return 0;
}
