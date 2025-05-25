#include <stdio.h>

// the main method
int main(void)
{
    // user to the number
    int age;

    puts("Hey, how old are you? ");
    scanf("%d", &age);

    while(age < 18)
    {
        printf("You are a kid\n");
        // break;
    }
    // if(age < 18)
    // {
    //     printf("You are a child");
    // } else if(age >= 18)
    // {
    //     printf("You are an adult");
    // }
}