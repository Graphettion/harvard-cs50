#include <cs50.h>
#include <stdio.h>

int main(void) {
  int height, i, j;
  
  // Prompt and validate user input
  do {
    printf("Height: ");
    height = get_int();
    
  } while (height < 1 || height > 23);
  
  // Draw the half pyramid
  for (i = 0; i < height; i++) {
    for (j = 0; j < height - i - 1; j++) {
      printf(" ");
    }
    
    for (j = 0; j < i + 2; j++) {
       printf("#");
    }
    
  printf("\n");
  }
  
}