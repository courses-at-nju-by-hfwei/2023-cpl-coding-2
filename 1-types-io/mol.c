//
// Created by hfwei on 2023/9/22.
//

#include <stdio.h>
int main(void) {
  const double MOL = 6.02E23;
  const int GRAM_PER_MOL = 32;

  int mass = 6;

  double quantity = mass * 1.0 / GRAM_PER_MOL * MOL;

  // e: exponent
  // g: significant digits
  printf("quantity = %.3e\nquantity = %.5g\n",
         quantity, quantity);

  return 0;
}