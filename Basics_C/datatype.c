#include <stdio.h>
// the main function

int main() 
{
    // the data types available
    int number;
    char name;
    double weight;
    float average;

    // the sizes of the data types
    printf("The sizes of the \'integer\' is %d\n", sizeof(number));
    printf("The size of \'char\' is %s\n", sizeof(name));
    printf("The size of \'double\' is  %d\n", sizeof(weight));
    printf("The size of \'float\' is %d\n", sizeof(average));

    // the return function
    return 0;
}