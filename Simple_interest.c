//WAP to find simple interest//
#include<stdio.h>
int main()
{int p,t;
float r,si;
printf("Enter the Principal Amount=");
scanf("%d",&p);
printf("Enter Rate of Interest=");
scanf("%f",&r);
printf("Enter the period=");
scanf("%d",&t);
si=(p*t*r)/100;
printf("Simple Interest is %f\n",si);
    return 0;
}
