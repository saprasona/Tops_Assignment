//WAP to find out the Min. number from given array using Function//
#include<stdio.h>
int findMin(int[],int);
int main()
{
    int a[100],a_size,Min_Num,i;
    printf("Enter the size of array=");
    scanf("%d",&a_size);
    printf("Enter the eMinements into array\n");
    for(i=0;i<a_size;i++)
    scanf("%d",&a[i]);
    Min_Num=findMin(a,a_size);
    printf("Min. number is=%d\n",Min_Num);
   return 0;
}
int findMin(int a[],int a_size)
{
    int i,Min_Num;
    Min_Num=a[0];
    for(i=1;i<a_size;i++)
    {
        if(Min_Num>a[i])
        Min_Num=a[i];
    }
   return Min_Num;
}