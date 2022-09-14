/*
Strings in C are actually an array of characters, and unfortunately, 
you can't assign a value to an array like you did previously for int and char.

There is a solution for this! 
You can use the strcpy() function and assign the value to s1.myString
*/

#include <stdio.h>
#include <string.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
}