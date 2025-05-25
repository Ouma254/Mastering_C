// this program allow user to 
#include <stdio.h>

// the main function 
void main() 
{
    // declare the variable
    int number, number1, number3, answer;

    puts("Enter the first three digits:");
    scanf("%d %d %d", &number, &number1, &number3);

    answer = number + number1 + number3;
    // The while loop 
    while(answer < 100)
    {
        // print the strings
        printf("\nAnswer is %d\n", answer);
        answer += 1;

        if(answer == 100)
        {
            puts("The end of the program");
            // user to enter their name
            char username[20];
            
            puts("Who are you? ");
            scanf("%s", username);

            // print the username
            printf("Your username is %s", username);
            break;
        } 
        else 
        {
            puts("Continue Adding new until it reaches 100");
        }
    }
    //system("pause");

}