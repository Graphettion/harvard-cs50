#include <cs50.h>
#include <stdio.h>

void print_name(string name);

int main(void) {
  printf("Please enter your name: \n");
  
  string s = get_string();
  print_name(s);
}

void print_name(string name) {
  printf("Hello, %s\n", name);
}