//WAP  to show vowels or consonant using switch case//
#include<stdio.h>
int main()
{ char ch;
printf("Enter the Alphabet=");
scanf("%c",&ch);
switch(ch)
{case 'a': printf("vowels"); break;
 case 'e': printf("vowels"); break;
 case 'i': printf("vowels"); break;
 case 'o': printf("vowels"); break;
 case 'u': printf("vowels"); break;
 case 'A': printf("vowels"); break;
 case 'E': printf("vowels"); break;
 case 'I': printf("vowels"); break;
 case 'O': printf("vowels"); break;
 case 'U': printf("vowels"); break;
 default:printf("Consonant"); 
}
  return 0;
}