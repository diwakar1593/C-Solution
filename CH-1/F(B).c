#include<stdio.h>

int main()	{
	
	float meters,feet,inches,centi_m,km;
	
	printf("Enter the distance in km\n");
 	scanf("%f",&km);
 	
 	meters=km*1000;
 	centi_m=meters*100;
 	feet=3.28084*meters;
 	inches=12*feet;
 	
 	printf("The distance in meters = %f\n",meters);
 	printf("The distance in centimeters = %f\n",centi_m);
 	printf("The distance in feet = %f\n",feet);
 	printf("The distance in inches = %f\n",inches);
 	
 	return 0;
 }

