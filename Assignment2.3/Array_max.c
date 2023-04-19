//WAP to find out Max.no using array//
#include<stdio.h>
int main()
{
    int arr[100],i,n,size;
    printf("Enter the size of array=");
    scanf("%d",&size);
    printf("Enter the number of element=");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("Enter number%d",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;++i)
    {
        if(arr[0]<arr[i])
        arr[0]=arr[i];
    }
    printf("max.element=%d",arr[0]);
    return 0;
}