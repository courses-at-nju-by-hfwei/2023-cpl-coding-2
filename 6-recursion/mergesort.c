//
// Created by hfwei on 2023/11/15.
//

#include <stdio.h>

#define LEN 7

int main() {
  int numbers[LEN] = {38, 27, 43, 3, 9, 82, 10};

  for (int i = 0; i < LEN; i++) {
    printf("%d ", numbers[i]);
  }

  // TODO

  return 0;
}

  // int left_index = left;
  // int right_index = mid + 1;
  // int copy_index = left;
  //
  // while (left_index <= mid && right_index <= right) {
  //   if (nums[left_index] <= nums[right_index]) {
  //     copy[copy_index] = nums[left_index];
  //     left_index++;
  //   } else {
  //     copy[copy_index] = nums[right_index];
  //     right_index++;
  //   }
  //
  //   copy_index++;
  // }
  //
  // while (left_index <= mid) {
  //   copy[copy_index] = nums[left_index];
  //   left_index++;
  //   copy_index++;
  // }
  //
  // while (right_index <= right) {
  //   copy[copy_index] = nums[right_index];
  //   right_index++;
  //   copy_index++;
  // }