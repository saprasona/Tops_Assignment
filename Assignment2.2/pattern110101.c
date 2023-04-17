#include<stdio.h>
int main()
{ int i,j,num;
printf("Enter the number=");
scanf("%d",&num);
for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++)
{   printf("%d",j%2);   }
    printf("\n");
}
    return 0;
}