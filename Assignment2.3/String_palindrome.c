//WAP to reverse a string and check that the string is palindrome or not//
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n,c=0;
    printf("Enter the string=");
    gets(str);
    n=strlen(str);
     printf("string rev = %s\n",strrev(str));
    for(i=0;i<n/2;i++)
    {
        if(str[i]==str[n-i-1])
        c++;
    }
    if(c==i)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is Not Palindrom");
    }
    return 0;
}