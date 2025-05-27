// the author : Denis
// the file name: demo1.c
// date: 27-05-2025
// example of pointers
#include <stdio.h>

//the main memory
int main(void) {
// the variable
int number = 45;
//char name[11] = "Denis Ouma";

// declare the Array and access the memory address
int marks[6] = { 86, 78, 89, 90, 45, 67};
int *mark = marks; 
// declare the variable
int* myNumber = &number;
//char *sname = &name;

printf("Hello, this is a pointer demo\nThe first pointer value is %d\nSecond array pointer value is %d\n", *myNumber, *mark);
 // use the for loop to go through the array
 int num;
 for(num = 0; num < 6; num++) {
     printf("The array list is %d\n", *(mark + num));
 }

return 0;
}
