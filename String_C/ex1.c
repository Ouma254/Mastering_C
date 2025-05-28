// this is a simple C file
// File name: ex1.c
// Date: 28/05/2025
// Author: Denis
#include <stdio.h>
#include <string.h>

// the main function
int main() {
    // declare some array of characters
    char message[] = "Keep on trying no matter what! Sometimes, it is just a matter of patience with how everything works";
    char username[] = "Denis";
    char userDetails[40];

    puts("User to enter their details: ");
    fgets(userDetails, sizeof(userDetails), stdin);
    // user to enter their details 
    // use the 

    // print on the string length
    printf("Hey %s\n, Message: \n%s", username, message);
    printf("The length of the string is %zu\n", strlen(message)); // while strlen() do not add it there
    printf("The length of the string is %zu\n", sizeof(message)); // the sizeof() function adds the \0 string end character making the count of string to add 1 to the total count

    if(strlen(userDetails) > 10) {
        printf("The user details of length : %zu\nUser details are: %s", strlen(userDetails), userDetails);    
    }
    // the return status
    return 0;
}
