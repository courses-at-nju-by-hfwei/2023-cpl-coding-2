//
// file: integrate.c
// Created by hfwei on 2023/12/13.
// A nice function pointer example on Riemann integration:
// https://en.wikipedia.org/wiki/Function_pointer
//

#include <stdio.h>
#include <math.h>

#define NUM_OF_PARTITIONS 100000

double Integrate(double low, double high,
                 double (*func)(double));
double Square(double x);

int main() {
  double low = 0.0;
  double high = 1.0;
  double integration = 0.0;

  integration = Integrate(low, high, sin);
  printf("Sin(0.0 .. 1.0) = %f\n", integration);

  integration = Integrate(low, high, cos);
  printf("Cos(0.0 .. 1.0) = %f\n", integration);

  integration = Integrate(low, high, Square);
  printf("Square(0.0 .. 1.0) = %f\n", integration);

  double (*funcs[])(double) = {sin, cos, Square};
  for (int i = 0; i < 3; ++i) {
    printf("integration = %f\n",
           Integrate(low, high, funcs[i]));
  }

  return 0;
}

double Integrate(double low, double high, double (*func)(double)) {
  double interval = (high - low) / NUM_OF_PARTITIONS;

  double sum = 0.0;
  for (int i = 0; i < NUM_OF_PARTITIONS; i++) {
    double xi = low + interval * i;
    double yi = func(xi);
    sum += yi * interval;
  }

  return sum;
}

double Square(double x) {
  return x * x;
}