#include <stdio.h>

int main() {
 int myInt;
 float myFloat;
 double myDouble;
 char myChar;
 
 /*
 Note that we use the %lu format specifer to print the result, 
 instead of %d. It is because the compiler expects the sizeof operator 
 to return a long unsigned int (%lu), instead of int (%d).
 */
 
 printf("%lu\n", sizeof(myInt));
 printf("%lu\n", sizeof(myFloat));
 printf("%lu\n", sizeof(myDouble));
 printf("%lu\n", sizeof(myChar));
  
 return 0;
}