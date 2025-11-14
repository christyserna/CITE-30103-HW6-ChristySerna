//identify the bug, classify the error type, and provide the corrected code

#include <stdio.h>

int main() {                            //original code
  int n;
printf("Enter number: ");
scanf("%d", n);
printf("You entered %d\n, n);
  return 0;
  }

  

int main() {                           //modified code
  int n;
printf("Enter number: ");
scanf("%d", &n);
printf("you entered %d\n, n);
  return 0;
  }

  /* I believe that the bug in the original code was just simply that of a syntax error, as the original
code does not have the address operator in front of the n on line 8, which is needed as it is used
to denote the memory address */
