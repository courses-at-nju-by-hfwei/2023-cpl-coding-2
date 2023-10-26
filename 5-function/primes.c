//
// Created by hfwei on 2023/10/11.
//

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int max = 0;
  scanf("%d", &max);

  int count = 0;

  for (int number = 2; number <= max; number++) {
    // decide whether number is a prime
    bool is_prime = true;
    for (int factor = 2; factor * factor <= number; factor++) {
      if (number % factor == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      count++;
      printf("%d ", number);
    }
  }

  printf("\ncount = %d\n", count);

  return 0;
}