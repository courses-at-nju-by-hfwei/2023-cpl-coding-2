//
// Created by hfwei on 2023/12/18.
//

#include <stdio.h>
#include <stddef.h>

typedef struct abc {
  char a;
  int b;
  char c;
} ABC;

int main(void) {
  printf("sizeof(ABC) = %zu\n", sizeof(ABC));
  printf("offsetof(ABC, a) = %zu\n", offsetof(ABC, a));
  printf("offsetof(ABC, b) = %zu\n", offsetof(ABC, b));
  printf("offsetof(ABC, c) = %zu\n", offsetof(ABC, c));

  return 0;
}