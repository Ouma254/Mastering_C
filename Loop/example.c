// File: example.c
// Author: Denis
// Date: 14/05/2025
// About: Symbolic constant

#include <stdio.h>

#define MAXIMUM_VALUE 300
#define MINIMUM_VALUE 0

#define STEP 25

// call the main method
int main() {
    // call the for loop

    int temp;

    for(temp = MAXIMUM_VALUE; temp >= MINIMUM_VALUE; temp -= STEP ) 
    {
        printf("The temperature counts %d\n\n", temp);

    }
    return 0;
}