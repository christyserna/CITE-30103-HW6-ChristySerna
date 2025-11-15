//using the conditional operator, determine whether a given integer is
//positive, negative, or zero

#include <stdio.h>

int main() {

int a;

  printf("insert an integer(a) : ");
  scanf("%d", &a);
  
  (a > 0)? printf("the integer is positive") : ((a < 0)? printf("the integer is negative") : printf("the integer is zero"));
  

return 0;
}
