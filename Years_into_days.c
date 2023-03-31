//WAP to convert years into days and days into years//
#include<stdio.h>
void main()
//Year into Days//
{ int years,days;
printf("Enter the years=");
scanf("%d",&years);
days=years*365;
printf("Days = %d",days);
//Days into year//
printf("\nEnter the days=");
scanf("%d",&days);
years=days/365;
printf("Years=%d",years);
}