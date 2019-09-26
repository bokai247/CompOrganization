/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a , c;

  printf("Enter radius (in cm):\n");
  scanf("%f", &r);

  a = PI * r * r /2.54/2.54;

  printf("Circle's area is %3.2f (sq in).\n", a);

  c = PI * 2 * r/2.54;

  printf("Its circumference is %3.2f (in).\n", c);
}
