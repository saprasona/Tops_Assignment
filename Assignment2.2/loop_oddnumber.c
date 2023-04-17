//WAP to take 10no.Input from user and find out..How many odd numbers are there//
#include<stdio.h>
int main()
{int i=0,num;
printf("Enter the number between o to 10=");
scanf("%d",&num);
do {if(i%2!=0)
    printf("\n%d",i);
    i++;}
while(i<=10);
    return 0;
}