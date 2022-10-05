/*
Program to Check if the given two numbers are friendly pair or not
We will code friendly pair in C. Friendly pair(Amicable numbers) are two different numbers related in a way such that the Ratio’s sum of the proper divisors divided by number itself for each is same

Example: 6 and 28 are friendly pairs because

(Sum of divisors of 6)/6 = (Sum of divisors of 28)/28

(1 + 2 + 3)/ 6 = (1 + 2 + 4 + 7 + 14)/ 28

1 = 1
*/

#include <stdio.h>

int getDivisorsSum(int num){
    
    int sum = 0;
    
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            sum = sum + i;
    }
    return sum;
}

int main ()
{
    int num1 = 6, num2 = 28;
    
    int sum1 = getDivisorsSum(num1);
    int sum2 = getDivisorsSum(num2);
    
    if(sum1/num1 == sum2/num2)
        printf("(%d, %d) are friendly pairs", num1, num2);
    else
        printf("(%d, %d) are not friendly pairs", num1, num2);

    
}
// Time complexity: O(N)
// Space complexity: O(1)