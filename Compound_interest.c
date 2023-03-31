//WAP to find compound interest//
#include<stdio.h>
#include<math.h>
int main()
//p=principal amount,n=no.of years,a=amount,r=interest,ci=compount interest//
{ int p,n,a;
float r,ci;
printf("Enter the principal amount=");
scanf("%d",&p);
printf("Enter the rate of interest=");
scanf("%f",&r);
printf("Enter time Period=");
scanf("%d",&n);
a= p*pow((1+r/100.0),n);
ci=a-p;
printf("Compound interest=%f",ci);
    return 0;
}