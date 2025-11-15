// create a program that demonstrates global and local scope.
// declare one variable outside of main and one inside of it
// print both and explain their scope differences

#include <stdio.h>

int chocolatecake = 48;

int main() {

int vanillacake = 21;

printf("the global variable chocolatecake is: %d", chocolatecake);
printf("the local variable vanillacake is: %d", vanillacake);

return 0;
}

/* the variable chocolatecake is declared outside of the main function & before it, which makes it
a global variable that can it can be used by all functions throughout the program as needed.
  the variable vanillacake is only declared inside of the main function, meaning that it is only
"visible" / can be utilized within the main function.
