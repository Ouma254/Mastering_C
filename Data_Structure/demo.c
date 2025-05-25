/*
 * Write a program to print your name, social security number, and
date of birth.*/
/*
 * Author : Denis Ouma
 * date : 11-05-2025
 * */

#include <stdio.h>
/* #include <conio.h> */
#include <stdlib.h>
#include <string.h>


// struct triangle {
// 	/* int length;
// 	int width;
// 	color_type color;
// 	fill_type fill; */
// }

int main() {
	// the main functions body
	int social_sec_number, date_of_birth; /* variables to store security number and date of birth */
	char name[20]; /* this variable stores the name of the company */

	/* 
	 *let the user enter the name of the company
	 * */
	puts("Hey there\n, Please enter the following:\nsocial security number:");
	scanf("%d", &social_sec_number);
	
	puts("Date of birth");
	scanf("%d", &date_of_birth);

	/*
	 * user to enter their name
	 * */
	puts("Username: ");
	scanf("%s", name);

    // print some user functions
    printf("Here are your personal details:\n\tName: %s\n\tSecurity Number: %d\n\tDate of Birth: %d\n\t", name, social_sec_number, date_of_birth);
	/*
	 * return status of the function
	 * */
	return 0;
}
