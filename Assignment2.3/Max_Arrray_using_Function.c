//WAP to find out the Max number from given array using Function//
#include<stdio.h>
int findMax(int[],int);
int main()
{
    int a[100],a_size,Max_Num,i;
    printf("Enter the size of array=");
    scanf("%d",&a_size);
    printf("Enter the eMaxements into array\n");
    for(i=0;i<a_size;i++)
    scanf("%d",&a[i]);
    Max_Num=findMax(a,a_size);
    printf("Max. number is=%d\n",Max_Num);
   return 0;
}
int findMax(int a[],int a_size)
{
    int i,Max_Num;
    Max_Num=a[0];
    for(i=1;i<a_size;i++)
    {
        if(Max_Num<a[i])
        Max_Num=a[i];
    }
   return Max_Num;
}