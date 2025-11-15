// use a while loop to compute and print the sum of numbers 1 to n,
// n being user input

#include <stdio.h>

int main() {
  
int n, i = 1, sum = 0;

  printf("enter a positive integer(n) : ");
  scanf("%d", &n);
  
while (i <= n) {
  sum += i;
  ++i;
}

  printf("sum = %d", sum);
  
return 0;
}
