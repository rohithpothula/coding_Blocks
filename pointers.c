#include <stdio.h>
int main()
{
  double i = 78.0; //variable initialization.
  float j = 6.78; //variable initialization.
  printf("size of (i+j) expression is : %d\n ", sizeof(i + j)); //Displaying the size of the expression (i+j).
  printf("size of (i) expression is : %d\n", sizeof(i)); //Displaying the size of the expression (i+j).
  printf("size of (j) expression is : %d\n", sizeof(j)); //Displaying the size of the expression (i+j).
  return 0;
}