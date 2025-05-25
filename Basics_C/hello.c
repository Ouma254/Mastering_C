#include <stdio.h>

// the main function
void main() 
{
    int num1, num2, num3, sum;
    // let the user input some input
    puts("Enter first number: ");
    scanf("%d", &num1);

    // second number
    puts("Enter Second number: ");
    scanf("%d", &num2);

    // third number
    puts("Enter the third number: ");
    scanf("%d", &num3);

    // sum of the values
    sum = (num1 + num2 + num3);
    printf("Sum of num1, num2, num3 is : %d\n", sum); 

}