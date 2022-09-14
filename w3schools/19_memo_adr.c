#include <stdio.h>

/*
When we assign a value to the variable, it is stored in this memory address.
To access it, use the reference operator (&), and the result will represent 
where the variable is stored.

The memory address is in hexadecimal form (0x..). 
&myAge is often called a "pointer". 
A pointer is a variable that stores the memory address of another variable as its value.
To print pointer values, we use the %p format specifier.
*/

int main() {
  int myAge = 43;
  
  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  return 0;
}
