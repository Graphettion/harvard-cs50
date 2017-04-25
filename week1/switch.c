#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please enter y/n: \n");
  
  char c = get_char();
  
  switch(c) {
    case 'y':
    case 'Y':
      printf("yes\n");
      break;
      
    case 'n':
    case 'N':
      printf("no\n");
      break;
      
    default:
      printf("error\n");
      break;
  }
}