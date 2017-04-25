#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please enter the first number to add/sub/mul/div/mod: ");
  int x = get_int();
  
  printf("Please enter the second number to add/sub/mul/div/mod: ");
  int y = get_int();
  
  printf("%i + %i = %i.\n", x, y, x + y);
  printf("%i - %i = %i.\n", x, y, x - y);
  printf("%i x %i = %i.\n", x, y, x * y);
  printf("%i / %i = %i.\n", x, y, x / y);
  printf("The remainder of %i / %i = %i.\n", x, y, x % y);
}