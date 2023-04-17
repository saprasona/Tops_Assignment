#include<stdio.h>
int main()
{ 
    int a,b,c,ch;
    printf("Enter the value of a and b=");
    scanf("%d %d",&a,&b);

        printf("\n1.Addition\n");
        printf("2.Substract\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Modulo\n");
        printf("6.Exit\n");
        printf("Chosse any one option\n");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1: printf("Addition=%d",c=a+b);
                scanf("%d",&c);
            break;
        case 2: printf("Substract=%d",c=a-b);
                scanf("%d",&c);
            break;
        case 3: printf("Multiplication=%d",c=a*b);
                scanf("%d",&c);
            break;
        case 4: printf("Division=%d",c=a/b);
                scanf("%c",&c);
            break;
        case 5: printf("Modulo=%d",c=a%b);
                scanf("%d",&c);
            break;
        case 6: printf("Exit");
        break;                     
        default: printf("Enter Valid input\n");
            break;
        }
    
    return 0;
}