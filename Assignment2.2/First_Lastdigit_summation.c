//WAP you have to make a summation of first and last digit.E.g.1234 Ans:-5//
#include<stdio.h>
int main()
{ 
    int n,last,sum;
    printf("Enter the Number=");
    scanf("%d",&n);
    last=n%10;
    while(n>9)
    {
        n=n/10;
    }
    sum = n+last;
    printf("\nSum of First & Last digit=%d",sum);
    return 0;
}