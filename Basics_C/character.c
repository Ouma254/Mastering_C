/* 
Author: Denis
name: character.c
About: this file is about practices on array on character   
*/

// the header file
#include <stdio.h>

// the main function
int main() 
{
    // declare the variables
    char name[15], subject[15], grade[10];

    // let the user enter their name
    puts("Kindly enter your name: ");
    scanf("%s", name);

    // greet the user
    printf("Hey, %s, Which grade did you achieve?\n", name);
    scanf("%s", grade);

    printf("Amazing! \"%s\" to nice know this is the grade you scored!\n What is the name of the subject? ", grade);
    scanf("%s", subject); 

    printf("\nThis is the subject name: %s", subject);

    // return statement
    return 0;

}