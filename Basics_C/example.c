#include <stdio.h>

// the main function
int main() 
{
    // declare the variables
    int marks[5], total;
    float average;

    // make the enter the makes
    puts("Enter the 1 marks");
    scanf("%d", &marks[0]);

    // seconds marks
    puts("Enter the 2 mark");
    scanf("%d", &marks[1]);

    // third marks
    puts("Enter the 3 mark");
    scanf("%d", &marks[2]);

    // forth mark
    puts("Enter the 4 mark");
    scanf("%d", &marks[3]);

    // the fifth mark
    puts("Enter the 5 mark");
    scanf("%d", &marks[4]);

    // find the total marks
    total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];

    // find the total marks
    average = total / 5;

    printf("The total marks entered are : %d\n", total);
    printf("The average of the 5 marks is: %.2f\n", average);

    // the return status
    return 0;


}