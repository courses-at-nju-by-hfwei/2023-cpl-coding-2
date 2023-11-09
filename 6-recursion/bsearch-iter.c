//
// Created by hfwei on 2023/11/9.
//

#include <stdio.h>

#define LEN 10

// dictionary: out of any functions; global variables
// life time: program start to end
// scope: from this point on until the end of the file (file scope)
// int dictionary[LEN] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };

/**
 * @brief Search for the key in the dict using the binary search algorithm.
 * @param key the key to search for
 * @param dict the dictionary to search
 * @param len the length of the dictionary
 * @return the index of the key in the dictionary; -1 if not found
 */
int BinarySearch(int key, const int dict[100], int len);

int main(void) {
  const int dictionary[LEN] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };

  int key = 0;
  scanf("%d", &key);

  int index = BinarySearch(key, dictionary, LEN);

  if (index == -1) {
    printf("Not found!\n");
  } else {
    printf("The index of %d is %d.\n", key, index);
  }

  return 0;
}

int BinarySearch(int key, const int dict[], int len) {
  int low = 0;
  int high = len - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (key > dict[mid]) {
      low = mid + 1;
    } else if (key < dict[mid]) {
      high = mid - 1;
    } else {  // key == dict[mid]
      return mid;
    }
  }

  return -1;
}