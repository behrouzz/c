/*
For code optimization, it is recommended to separate the declaration and 
the definition of the function.

You will often see C programs that have function declaration above main(), 
and function definition below main(). This will make the code better 
organized and easier to read.
*/

#include <stdio.h>

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}