//WAP to find Area of circle,rectangle,triangle,square//
#include<stdio.h>
void main()
{ //Area of Rectangle//
   int length,width;
   printf("Enter the length:-");
   scanf("%d",&length);
   printf("Enter the width:-");
   scanf("%d",&width);
   printf("Area of Rectangle is = %d\n",length*width);
//Area of Circle//
   float radius;
   printf("\nEnter the radius:-");
   scanf("%f",&radius);
   printf("Area of Circle is = %f\n",3.14*radius*radius);
//Area of Square//
   int side;
   printf("\nEnter the side:-");
   scanf("%d",&side);
   printf("Area of Square is = %d\n",side*side);
//Area of Triangle//
   float base,height;
   printf("\nEnter the base:-");
   scanf("%f",&base);
   printf("Enter the height:-");
   scanf("%f",&height);
   printf("Area of Triangle is= %f\n",0.5*base*height);
}