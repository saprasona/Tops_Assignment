//WAP to take two Array input from user and sort them in descending order as per user's choice//
#include<stdio.h>
int main()
{
    int a[100],i,j,temp,n;
    printf("Enter Array size=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Descending elements=");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

    return 0;
}