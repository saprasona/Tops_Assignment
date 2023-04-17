#include<stdio.h>
int main()
{  int i,j,num;
printf("Enter the number=");
scanf("%d",&num);
for(i=0;i<num;i++)
{
    for(j=0;j<num+i;j++)
    {
        if(j<num-i-1)
        printf(" ");
        else
        printf("*");
    }
    printf("\n");
}
    return 0;
}