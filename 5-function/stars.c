//
// Created by hfwei on 2023/10/11.
//

#include <stdio.h>

int main(void) {
  int lines = 0;
  scanf("%d", &lines);

  for (int i = 0; i < lines; ++i) {
    // print lines - 1 - i spaces
    for (int j = 0; j < lines - 1 - i; ++j) {
      printf(" ");
    }

    // print 2 * i + 1 stars
    for (int j = 0; j < 2 * i + i; ++j) {
      printf("*");
    }

    if (i < lines - 1) {
      printf("\n");
    }
  }

  return 0;
}