//debug the following code so that it prints the correct avg of two integers & show corrected output

#include <stdio.h>                    //original code
int main(void) {
  int a = 5, b = 10;
float avg = (a + b) / 2;
printf("Average = %.2f\n", avg);
return 0;
}

#include <stdio.h>                  //modified code
int main(void) {
  float a = 5.0, b = 10.0;
float avg = (a + b) / 2.0;
printf("Average = %.2f\n", avg);
return 0;
}

/* the original code would like the outcome of code to be float, however has a & b initialized
as ints, which can create issues regarding integer division and how it truncates values that come
after the decimal. in this case, I initialized a & b as floats to ensure that their decimal part is
not truncated, and further clarified this by adding a .0 after the whole numbers. I'm sure we could
have also just replaced the %.2f with a %.2d as both a & b are whole numbers in the provided code
but i thought the first method was more appropriate */
