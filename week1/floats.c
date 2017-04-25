#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please enter the first number to divide: ");
  float x = get_float();
  
  printf("Please enter the second number to divide: ");
  float y = get_float();
  
  printf("%f + %f = %f.\n", x, y, x + y);
  printf("%f - %f = %f.\n", x, y, x - y);
  printf("%f * %f = %f.\n", x, y, x * y);
  printf("%f / %f = %f.\n", x, y, x / y);
}