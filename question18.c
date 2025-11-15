// create a simple arithmetic calculator using switch. use the arithmetic
// operators (* / - + ) as your case value & detect division by zero

#include <stdio.h>

int main() {
  
double a, b, result;
char ch;

  printf("enter *, /, -, + :\n");
  scanf("%c", &ch);

  printf("insert two numbers : ");
  scanf(%d, %d, &a, &b);
  
switch (ch) {
  
case '*':
result = a * b;
printf("%d * %d = %d", a, b, result);
break;

case '/':
if (b == 0) {
break;
}
  
  result = a / b;
printf("%d / %d = %d", a, b, result);
break;

case '-':
result = a - b;
printf("%d - %d = %d", a, b, result);
break;

case '+':
result = a + b;
printf("%d + %d = %d", a, b, result);
break;

  default:
  printf("the operator you chose is invalid. try again.");

}
  return 0;
}
