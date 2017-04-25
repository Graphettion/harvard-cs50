#include <cs50.h>
#include <stdio.h>

int square(int num);

int main(void) {
  printf("Type a number to square: ");
  int x = get_int();
  printf("The square of %i is %i.\n", x, square(x));
}

int square(int n) {
  return n * n;
}