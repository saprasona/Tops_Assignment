//write a C program to find whether a given year is a leap year//
#include<stdio.h>
int main()
{   int year;
    printf("Enter the Year=");
    scanf("%d",&year);
    if(year%4==0) 
    {    printf("Year is leap year");}
    else
    {    printf("Year is not leap year");}
    return 0;
}