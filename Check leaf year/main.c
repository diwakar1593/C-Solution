//Check Leaf Year
//This is a program to check wheater a given year is leaf year or not

#include<stdio.h>
int main(){
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if(year%4 == 0  && year%100 !=0){
        printf("%d is a leaf year\n",year);

    }
    else if(year %400==0){
        printf("%d is a leaf year\n",year);

    }
    else    
        printf("%d is not a leaf year\n",year);
    return 0;
}