//
// Created by hfwei on 2022/11/10.
//

#include <limits.h>
#include <stdio.h>

int SquareInt(int num);
double SquareDouble(double num);

int main() {
  // narrowing conversion (still in the range)

  // out of the range: undefined behavior!!!

  // arguments; narrowing conversion

  // return value; narrowing conversion

  // from int to float; narrowing conversion
  int big = 1234567890;
  float approx = big;

  printf("big = %d\t approx = %f\t diff = %d\n",
         big, approx, big - (int) approx);

  return 0;
}

int SquareInt(int num) {
  return num * num;
}

double SquareDouble(double num) {
  return num * num;
}