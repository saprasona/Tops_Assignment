//WAp to print table up to given numbers//
#include<stdio.h>
int main()
{ int num,i;
printf("Enter the number=");
scanf("%d",&num);
i=1;
while(i<=10)
{printf("\n%d",i*num);
i++;}
    return 0;
}