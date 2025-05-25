//
// Created by den on 5/16/25.
//
#include <stdio.h>
#include <string.h>

char my_letter() {
    // this function returns to string
    char let = 'D';
    // char abbreviation = 'A';
    return let;
}

int addInt(int number, int number2) {
    int sum = number + number2;

    return sum;
}

int divide(float number1, float number2) {
    float answer;
    if (number2 > number1) {
        answer = number2 / number1;
    } else {
        answer = number1 / number2;
    }
    ;
    // return value
    return (int)answer;
}

// the main function
int main () {
    // call the functions
    puts("Welcome to this program");
    // input the user inputs
    int num1, num2;
    float num3, num4;

    // input some user input
    puts("Hey");
    puts("Enter the first value:");
    scanf("%d, %d", &num1, &num2);

    puts("Enter the second set of values");
    scanf("%f %f", &num3, &num4);

    return 0;
}