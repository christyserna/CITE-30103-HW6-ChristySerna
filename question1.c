//write a program that calculates the area and perimeter of a rectangle,
//then label each program section 
                                                              // DOCUMENTATION SECTION 

#include <stdio.>                                             //LINK SECTION

float area;
float perimeter;
float rectangleArea(int length, int width);                   //GLOBAL DECLARATION SECTION
float rectanglePerimeter(int length, int width);

int main() {                                                  //MAIN FUNCTION SECTION

  float width, length;

  printf("what is the width of your rectangle? : ")
scanf("%f", &width);
  
  printf("what is the length of your rectangle? : ")
scanf("%f", &length);
  
  area = rectangleArea(int length, int width);

    printf("the area of your rectangle is: %.2f\n", area);

  perimeter = rectanglePerimeter(int length, int width);
  
    printf("the perimeter of your rectangle is: %.2f\n", perimeter);

return 0;
  
}

int rectangleArea(int length, int width) {                                //SUBPROGRAM SECTION
return (width * length); 
}

int rectanglePerimeter(int length, int width) {
return ((length*2) + (width*2))
}
