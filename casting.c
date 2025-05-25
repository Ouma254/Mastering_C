// Practice on the casting in C
// Author: Denis
// Date: 25/05/2025
// Filename: casting.c
#include <stdio.h>


// the main function
int main(void)
{
    // user to enter some integers into their program
    int number1, number2, number3;
    fputs("Enter the three integers ", stdout);

    scanf("%d %d %d", &number1, &number2, &number3);
    printf("You entered the following numbers:\nNumber 1: %d\nNumber 2: %d\nNumber 3: %d\n", number1, number2, number3);

    // cast the numbers then add
   // (float)number1;
    //(float)number2;
    //(float)number3;

    float answer = number1 + number2 +number3;
    printf("Sum of the numbers: %.4f\n", answer);

    return 0;

}
