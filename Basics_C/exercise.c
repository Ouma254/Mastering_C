#include <stdio.h>

#define NAME "PYTHON";

// The main functions
int main() {

    // declare variable array
    float data[5], answer, answer1;

    puts("Enter the three numbers(Integers): ");
    scanf("%f", &data[0]);

    puts("Enter the second number");
    scanf("%f", &data[1]);

    puts("Enter the third number");
    scanf("%f", &data[2]);

    // print the result
    data[4]=data[0]+data[1]+data[2];

    // find the multiply the three numbers
    data[3]=data[0]*data[1]*data[2];
    printf("The sum of the three floats is %f\n", data[4]);
    printf("The multiplication of the three numbers are %.3f\n", data[3]);

    return 0;

}