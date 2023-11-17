//
// Created by hfwei on 2022/11/10.
//

#include <limits.h>
#include <stdio.h>

int SquareInt(int num);
double SquareDouble(double num);

int main() {
  // narrowing conversion (still in the range)
  int i = 3.14159;

  // out of the range: undefined behavior!!!
  int j = UINT_MAX;

  // arguments; narrowing conversion
  double pi = 3.14;
  SquareInt(pi);

  // return value; narrowing conversion
  int val = SquareDouble(pi);

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