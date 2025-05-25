// functions
#include <stdio.h>

int addIntegers(int num, int num2) {

    int answer = num + num2;
    printf("Answer is: %d\n", answer);

    return answer;
}


int main(void)
{
    // call the function
    // declare variable
    int number1, number2;

    // user input
    fputs("Enter the two\n", stdout);
    scanf("%d %d", &number1, &number2);
    //call the function
    addIntegers(number1, number2);

    return 0;
}
