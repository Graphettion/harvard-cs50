#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please enter the first number to add: ");
  int x = get_int();
  
  printf("Please enter the second number to add: ");
  int y = get_int();
  
  printf("%i + %i = %i.\n", x, y, x + y);
}