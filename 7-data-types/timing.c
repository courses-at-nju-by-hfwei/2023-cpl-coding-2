//
// Created by hfwei on 2022/11/10.
//

#include <stdio.h>
#include <time.h>

long long Fib(int n);

int main() {
  int n;
  scanf("%d", &n);

  printf("Fib(%d) = %lld\n", n, Fib(n));

  return 0;
}

long long Fib(int n) {
  if (n <= 1) {
    return n;
  }

  return Fib(n - 1) + Fib(n - 2);
}