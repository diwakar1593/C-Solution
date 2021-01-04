#include<stdio.h>    
#include<conio.h>    

int main()	{    
 
	int sal;     
	float gros_sal;     
	
	printf("Enter the basic salary of Ramesh : ");     
	scanf("%d", &sal);     
	
	//salary calculated     
	
	gros_sal=sal+(sal*40/100)+(sal*20/100);     
	
	printf("%f is the gross salary of Ramesh.", gros_sal);     
	getch();     
	
	return 0;   
	
}
