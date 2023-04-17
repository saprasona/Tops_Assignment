//WAP find number is Even or Odd using Ternary operator//
#include<stdio.h>
int main()
{ int n;
printf("Enter the number=");
scanf("%d",&n);
(n%2==0) ? (printf("%d is Even numbers\n",n)) : (printf("%d is Odd numbers\n",n));
    return 0;
}