#include<stdio.h>
int main()
{int i,j,k,num;
printf("Enter the number=");
scanf("%d",&num);
for(i=1;i<=num;i++)   
{   for(j=i;j<num;j++)  
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)    
    {
        printf("*");
    }
    printf("\n");
}
for(i=num;i>=1;i--)
{   for(j=i;j<num;j++)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("*");
    }
    printf("\n");
}
    return 0;
}