#include<stdio.h>
#include<conio.h>

 int main()	{
 	float l,b,r;
 
 	printf("Enter the length and breadth of the rectangle : ");
 	scanf("%f%f", &l,&b);
 
 //rectangle calculations
 	printf("\n%f is the area of the rectangle.", l*b);
 	printf("\n%f is the perimeter of the rectangle.", l+b);
 //circle calculations
 	printf("\n\nEnter the radius of the circle : ");
 	scanf("%f", &r);
 
 	printf("\n%f is the area of the circle.", 3.14*r*r);
 	printf("\n%f is the perimeter of the circle.", 2*3.14*r);
 
 	getch();
 	return 0;
 }
