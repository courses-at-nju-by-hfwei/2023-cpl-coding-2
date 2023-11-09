//
// Created by hfwei on 2023/11/9.
//

#include <stdio.h>

#define LEN 93

int main() {
  long long fibs[LEN] = { 0LL, 1LL };

  int n;
  scanf("%d", &n);

  for (int i = 2; i <= n; ++i) {
    fibs[i] = fibs[i - 1] + fibs[i - 2];
  }

  printf("Fib(%d) = %lld\n", n, fibs[n]);

  return 0;
}