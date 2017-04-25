#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please enter y/n: \n");
  
  char c = get_char();
  
  if (c == 'y' || c == 'Y') {
    printf("yes\n");
  } else if (c == 'n' || c == 'N') {
    printf("no\n");
  } else {
    printf("error\n");
  }
}