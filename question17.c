// define a grading system using the if-else statement. 
// A (≥ 90), B (80–89), C (70–79), D (60–69), F (< 60)
// print only the grade

#include <stdio.h>

int main() {

int g;

printf("insert the grade(g) : ");
scanf("%d", &g);

if ( g >= 90 ) {
printf("A");
}
  
else if (g <= 89 && g >= 80) {
printf("B");
}

else if (g <= 79 && g >= 70) {
printf("C");
}
  
else if (g <= 69 && g >= 60) {
printf("D");
}
  
else if ( g < 60 ) {
printf("F");
}
  
else {
printf("the grade you inserted was not valid. try again.");
}
  
return 0;
}
