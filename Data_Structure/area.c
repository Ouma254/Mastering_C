/*Name: area.c
 * Program to Find the area of the rectangle
 * in inches
 * */
/*
 * Author: Denis
 * Date: 11/05/2025
 */

include <stdio.h>

/* 
 * function to take the user input
 * */
// int values()
// {
int length, width;
	/*
	 * user to enter the details*/
puts("Enter the Dimensions of the shape(Rectangle)\t Enter length:");
scanf("%d", &length);
puts("Enter the width");
scanf("%d", &width);

	/*
	 * return the values from the user*/
	// return width, length;
//}

/*
 * function to computer the area
 */
int area_of_rect(int len, int wid )
{
	// invoke the other function
	values();
	int area = len * wid;
	printf("Area is: %d", area);
	
	return 0;
}

/* 
 * the main 
 */
int main()
{
	/*
	 * call the funtion area */
	area_of_rect(length, width);
	printf(area_of_rect);
	printf("Area is %d");

	return 0;

}


