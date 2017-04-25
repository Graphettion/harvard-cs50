#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please enter any number: \n");
  
  int i = get_int();
  
  if (i < 0) {
    printf("You typed a negative number.\n");
  } else if (i > 0) {
    printf("You typed a positive number.\n");
  } else {
    printf("You typed zero.\n");
  }
}