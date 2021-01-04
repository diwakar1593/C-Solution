#include<stdio.h>
#include<conio.h>

 int main()	{
 	
 	float a,b,c,d,e;
 
 	printf("Enter the marks out of 100 in five subjects of the student : ");
 	scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
 
 //his total marks
 	printf("\n%f is the aggregate marks obtained by him.", a+b+c+d+e);
 //his percentage marks
 	printf("\n%f is the percentage marks obtained by him.", (a+b+c+d+e)/5);
 
 	getch();
 	return 0;
 }
