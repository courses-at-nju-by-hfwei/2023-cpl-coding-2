//
// Created by hfwei on 2023/11/9.
//

#include <stdio.h>

// Fib(92) =  7 540 113 804 746 346 429
// long long: 9 223 372 036 854 775 807
// Fib(93) = 12 200 160 415 121 876 738
int main() {
  int n;
  scanf("%d", &n);

  long long fib0 = 0L;
  long long fib1 = 1L;

  long long fib2 = 0L;
  for (int i = 2; i <= n; i++) {
    fib2 = fib0 + fib1;
    fib0 = fib1;
    fib1 = fib2;
  }

  printf("Fib(%d) = %lld ", n, fib2);

  return 0;
}