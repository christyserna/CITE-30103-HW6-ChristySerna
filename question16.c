// write a program that reads an integer and prints whether it is
// positive, negative or zero using the if else-if else statement

#include <stdio.h>

int main() {

int a;

printf("insert an integer(a): ");
scanf("%d", &a);

if ( a == 0 ) {
printf(" the integer you inserted is neither positive nor negative, it is zero.");
}

else if ( a > 0 ) {
  printf(" the integer you inserted is positive.");
}

else if ( a < 0 ) {
  printf(" the integer you inserted is negative.");
}

else {
  printf("the test was inconclusive. try again.");
}
  
return 0;
}
