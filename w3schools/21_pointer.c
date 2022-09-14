#include <stdio.h>

/*
In the previous example, we used the pointer variable to get the memory address 
of a variable (used together with the & reference operator).

However, you can also get the value of the variable the pointer points to, 
by using the * operator (the dereference operator)
*/

int main() {
  int myAge = 43;  // Variable declaration
  int* ptr = &myAge;  // Pointer declaration

  // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

  // Dereference: Output the value of myAge with the pointer (43)
  printf("%d\n", *ptr);
  
  return 0;
}

/*
Note that the * sign can be confusing here, as it does two different things in our code:

 - When used in declaration (int* ptr), it creates a pointer variable.
 - When not used in declaration, it act as a dereference operator.
*/