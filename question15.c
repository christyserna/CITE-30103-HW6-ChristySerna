// for 5 subject marks, display PASS only if each mark is GToET 40.
// otherwise, display FAIL.
// use relational & logical operators.

#include <stdio.h>

int main() {
  
int a;
printf("insert subject mark : ");
scanf("%d", &a);

if ( a > 40 || a == 40) {
  printf("PASS");
}
  
  else if ( a < 40 ) {
    printf("FAIL");
}
    
  else {
    printf("please insert a valid subject mark : ");
}
  
return 0;
}
