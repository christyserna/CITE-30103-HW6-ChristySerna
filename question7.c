// write a program that computes area and circumference of a circle
// using both the #define and const for PI
// user must input radius, and the output mus be formatted to two decimals
// area = pi r squared, circumference = 2 pi r

#include <stdio.h>

#define PI 3.14159
const double PI = 3.14159

int main() {

double radius, area, circumference;

  
printf("insert the radius of the circle: ");
scanf("%lf", &radius);

area = (PI * radius * radius);
  
circumference = (2 * PI * radius);

printf("the area of the circle is : %.2f\n", area);
printf("the circumference of the circle is : %.2f\n", circumference);
  
return 0;
}
