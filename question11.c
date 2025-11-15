//write a program that inputs two integers and prints results for addition, subtraction,
//multiplication, division, and remainder (mod)

#include <stdio.h>

int main() {

int a, b, c;

  printf("enter the first integer(a): );
  scanf("%d", &a);
  printf("enter the second integer(b): );
  scanf("%d", &b);
  
  c = a + b;
  printf("the sum is : %d\n", c)
    
  c = a - b;
  printf("the difference is : %d\n", c)  
    
  c = a * b;
  printf("the product is : %d\n", c)  
    
  c = a / b;
  printf("the quotient is : %d\n", c)  
  
  c = a % b;
  printf("the remainder is : %d\n", c)

return 0;
}
