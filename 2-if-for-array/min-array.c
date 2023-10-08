//
// Created by hfwei on 2023/10/6.
//

#include <stdio.h>

#define NUM 5

int main(void) {
  // int[5] (not int[])
  // int[3]
  int numbers[NUM] = { 1968, 1961, 1969, 1954, 1969 };

  // []: array subscripting operator
  int min = numbers[0];

  // for (init clause; condition expression; iteration expression) loop-body
  // iter 0: i = 1    i < 5
  // iter 1: min = 1961 (numbers[1])  i = 2  i < 5
  // iter 2: i = 3   i < 5
  // iter 3: min = 1954 (numbers[3])  i = 4  i < 5
  // iter 4: i = 5 exit the loop
  for (int i = 1; i < NUM; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }

  printf("min = %d\n", min);

  return 0;
}