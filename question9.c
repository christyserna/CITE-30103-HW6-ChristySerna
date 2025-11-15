//write a short program that divides two integers and shows both integer
// floating point division results using both implicit & explicit type casting

include <stdio.h>

int main() {

int a = 10, b = 3;
char x = 'a';
double div;

div = (double)a / b;

x = x + 3;

printf("implicit answer was %c", x);
printf("explicit answer was %f", div); 
  
return 0;
}
