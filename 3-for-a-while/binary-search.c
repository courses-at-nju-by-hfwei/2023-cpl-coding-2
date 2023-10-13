//
// Created by hfwei on 2023/10/11.
//

#include <stdio.h>

#define LEN 10
int dict[LEN] = { 1, 1, 2, 3, 5, 8, 13, 21, 35, 56 };

int main(void) {
  int key = 0;
  scanf("%d", &key);

  // TODO: binary search: search for key in dict[]
  int low = 0;
  int high = LEN - 1;

  int index = -1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (key > dict[mid]) {
      low = mid + 1;
    } else if (key < dict[mid]) {
      high = mid - 1;
    } else {
      index = mid;
      // break;
      high = mid - 1;
    }
  }

  printf("index = %d\n", index);

  return 0;
}