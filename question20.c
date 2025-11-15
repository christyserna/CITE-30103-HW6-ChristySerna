// use a do-while loop to repeatedly accept integers until the user enters 0.
// after exit, print how many numbers were entered, excluding 0)

#include <stdio.h>

int main() {

  int a, next;
  
  printf("insert integer(a) : ");
  scanf("%d", &a);

  do {
   scanf("%d", &a);
    if ( a!= 0) {
      next++;
    }
  } 
  while (a != 0)
    printf("the amount of numbers entered was : %d, next);
  
  
return 0;
}
