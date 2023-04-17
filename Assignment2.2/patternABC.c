#include<stdio.h>
int main()
{ char ch='A';
printf("Enter the Capital Alphabet=");
scanf("%c",&ch);
for(int i=1;i<=5;i++)
{for(int j=1;j<=i;j++)
    {printf("%c",ch);ch++;}
    printf("\n");
}
    return 0;
}