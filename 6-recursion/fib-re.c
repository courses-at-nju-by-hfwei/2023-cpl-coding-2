//
// Visualization (for n = 4): https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Along%20long%20Fib%28int%20n%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20n%20%3D%204%3B%0A%0A%20%20printf%28%22%25lld%5Cn%22,%20Fib%28n%29%29%3B%0A%7D%0A%0Along%20long%20Fib%28int%20n%29%20%7B%0A%20%20if%20%28n%20%3D%3D%200%29%20%7B%0A%20%20%20%20return%200%3B%0A%20%20%7D%0A%0A%20%20if%20%28n%20%3D%3D%201%29%20%7B%0A%20%20%20%20return%201%3B%0A%20%20%7D%0A%0A%20%20return%20Fib%28n%20-%201%29%20%2B%20Fib%28n%20-%202%29%3B%0A%7D&cumulative=false&curInstr=55&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
// Created by hfwei on 2023/11/9.
//

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  // printf("Fib(%d) = %lld\n", n, Fib(n));

  return 0;
}