// the user inputs some data into their computer using the fgets() function
//AUTHOR: Denis
//date: 25/05/2025

#include <stdio.h>
#include <string.h>

int main(void) {
// using the arrays of characters let the user enter some data
// declare the memory placeholder
char username[25];

// fgets(str, sizeof, stin)
puts("Enter your name: ");
fgets(username, sizeof(username), stdin);

// print some output to the screen
printf("Your name is: %s ", username);

// return status
return 0;

}
