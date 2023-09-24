//
// Created by hfwei on 2023/9/22.
//

#include <stdio.h>
int main(void) {
  const double PI = 3.14159;
  int radius = 10;

  // radius = 5;

  // magic number
  double circumference = 2 * PI * radius;
  double area = PI * radius * radius;

  // %d: decimal
  // .2: precision
  printf("radius = %d\ncircumference = %.0f\narea = %.2f\n",
         radius, circumference, area);

  return 0;
}