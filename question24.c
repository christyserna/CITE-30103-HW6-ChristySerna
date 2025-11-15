//write a program that prints numbers 1-50, skipping multiples of 5 (using continue) and
//stopping completely when 40 is reached (using break)
// print how many numbers were displayed

include <stdio.h>

#int main() {

int numbers = 0;

for (int i = 1 ; i <= 50 ; i++) {
if ( i == 40) {
  break;
}

  if ( i % 5 == 0 ) {
    continue;
  }

printf("%d, i);
numbers++;
  
  }

printf("the total amount of numbers that were displayed was : %d", numbers);
  
return 0;
}
