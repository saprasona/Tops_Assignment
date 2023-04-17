//WAP to find out length of string inbuilt function//
#include<stdio.h>
int main()
{
    char str[100];
    int length=0,i;
    printf("Enter string=");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("Length of string=%d\n",length);
    return 0;
}