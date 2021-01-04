#include<stdio.h>
#include<conio.h>

 int main()	{
 	float f,c;
 
 	printf("Enter the temperature in Fahrenheit : ");
 	scanf("%f", &f);
 
 	//conversion of temperature
 	c=(f-32)*100/180;
 
 	printf("\n%f is that temperature in celcius.", c);
 
 	getch();
 	return 0;
 }

