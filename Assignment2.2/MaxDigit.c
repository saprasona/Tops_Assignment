//WAP to find out the Max from given number E.g.no:-162 Max number is 6//
#include<stdio.h>
int main()
{
  int num,remider,max=0;
  printf("Enter the Number=");
  scanf("%d",&num);
  while(num>0)
  {
    remider=num%10;
    if(max<remider)
    {
      max=remider;
    }
    num=num/10;
  }
  printf("The maximum Digit is = %d",max);
  return 0;
}