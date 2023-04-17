//WAP to print number in reverse order e.g:number=64728--->reverse=82746//
#include<stdio.h>
int main()
{ int n,i;
printf("Enter the number=");
scanf("%d",&n);
while(n>0)
{
    i=n%10;
    printf("%d",i);
    n=n/10;
}
    return 0;
}