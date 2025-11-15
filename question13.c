// write a program that checks whether a number is divisible by both 2 & 3, but not 7
// using logical operators only

#include <stdio.h>

int main() {

  int a;

  printf("insert an integer(a): ");
  scanf("%d", &a);

  if ((a % 2 == 0 ) && ( a % 3 == 0 ) && (a % 7 != 0 )) {
    printf("the integer you inserted is divisible by both 2 & 3, but not 7.");
  }
  else {
    printf("the integer you inserted is NOT divisible by both 2 & 3, but not 7.");
  }

  
return 0;
}
