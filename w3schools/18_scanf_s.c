#include <stdio.h>

int main() {
  // you MUST specify the size of the string/array
  char firstName[30];
  
  printf("Enter your first name: \n");
  scanf("%s", firstName); // 
  printf("Hello %s.", firstName);
  
  // you don't have to specify the reference operator (&) 
  // when working with strings in scanf().
  
  return 0;
}
