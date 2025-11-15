//declare variables of char, int, long int, float, and double, and then
//display the size (in bytes) for the variables (not their data types)

#include <stdio.h>

int main() {

char cat;
int dog;
long int fishy;
float birdy;
double hamster;

printf("the size of the variable char cat is:  %zu  bytes\n", sizeof(cat));
  
printf("the size of the variable int dog is:  %zu  bytes\n", sizeof(dog));
  
printf("the size of the variable long int fishy is:  %zu bytes\n", sizeof(fishy));
  
printf("the size of the variable float birdy is:  %zu bytes\n", sizeof(birdy));
  
printf("the size of the variable double hamster is:  %zu  bytes\n", sizeof(hamster));

  
  return 0;
}
