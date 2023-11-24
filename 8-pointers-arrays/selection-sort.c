//
// Created by hfwei on 2023/11/23.
// Visualization of Swap: https://pythontutor.com/visualize.html#code=//%0A//%20Created%20by%20hfwei%20on%202023/10/12.%0A//%0A%0A%23include%20%3Cstdio.h%3E%0A%0A%23define%20LEN%205%0A%0Avoid%20SelectionSort%28int%20arr%5B%5D,%20int%20len%29%3B%0Avoid%20WrongSwap%28int%20left,%20int%20right%29%3B%0Avoid%20Swap%28int%20*left,%20int%20*right%29%3B%0Aint%20GetMinIndex%28const%20int%20arr%5B%5D,%20int%20begin,%20int%20end%29%3B%0Avoid%20Print%28const%20int%20arr%5B%5D,%20int%20len%29%3B%0A%0Aint%20main%28void%29%20%7B%0A%20%20int%20numbers%5BLEN%5D%20%3D%20%7B15,%2078,%2023,%208,%2050%7D%3B%0A%0A%20%20Print%28numbers,%20LEN%29%3B%0A%20%20SelectionSort%28numbers,%20LEN%29%3B%0A%20%20Print%28numbers,%20LEN%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0A//%20arr%3A%20the%20%28copy%20of%20the%29%20address%20of%20the%20first%20element%20of%20the%20%60numbers%60%20array%0Avoid%20SelectionSort%28int%20arr%5B%5D,%20int%20len%29%20%7B%0A%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20len%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20int%20min_index%20%3D%20GetMinIndex%28arr,%20i,%20len%29%3B%0A%0A%20%20%20%20//%20ERROR%3A%20WrongSwap%28arr%5Bi%5D,%20arr%5Bmin_index%5D%29%3B%0A%20%20%20%20int%20temp%20%3D%20arr%5Bi%5D%3B%0A%20%20%20%20arr%5Bi%5D%20%3D%20arr%5Bmin_index%5D%3B%0A%20%20%20%20arr%5Bmin_index%5D%20%3D%20temp%3B%0A%20%20%7D%0A%7D%0A%0Aint%20GetMinIndex%28const%20int%20arr%5B%5D,%20int%20begin,%20int%20end%29%20%7B%0A%20%20int%20min%20%3D%20arr%5Bbegin%5D%3B%0A%20%20int%20min_index%20%3D%20begin%3B%0A%0A%20%20for%20%28int%20i%20%3D%20begin%20%2B%201%3B%20i%20%3C%20end%3B%20%2B%2Bi%29%20%7B%0A%20%20%20%20if%20%28arr%5Bi%5D%20%3C%20min%29%20%7B%0A%20%20%20%20%20%20min%20%3D%20arr%5Bi%5D%3B%0A%20%20%20%20%20%20min_index%20%3D%20i%3B%0A%20%20%20%20%7D%0A%20%20%7D%0A%0A%20%20return%20min_index%3B%0A%7D%0A%0Avoid%20WrongSwap%28int%20left,%20int%20right%29%20%7B%0A%20%20int%20temp%20%3D%20left%3B%0A%20%20left%20%3D%20right%3B%0A%20%20right%20%3D%20temp%3B%0A%7D%0A%0Avoid%20Swap%28int%20*left,%20int%20*right%29%20%7B%0A%20%20int%20temp%20%3D%20*left%3B%0A%20%20*left%20%3D%20*right%3B%0A%20%20*right%20%3D%20temp%3B%0A%7D%0A%0Avoid%20Print%28const%20int%20arr%5B%5D,%20int%20len%29%20%7B%0A%20%20printf%28%22%5Cn%22%29%3B%0A%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20len%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20printf%28%22%25d%20%22,%20arr%5Bi%5D%29%3B%0A%20%20%7D%0A%20%20printf%28%22%5Cn%22%29%3B%0A%7D&cumulative=true&heapPrimitives=nevernest&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
// Visualization of malloc:
//

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

void SelectionSort(int arr[], int len);
void WrongSwap(int left, int right);
int GetMinIndex(const int arr[], int begin, int end);
void Print(const int arr[], int len);

int main(void) {
  int numbers[LEN] = {15, 78, 23, 8, 50};

  Print(numbers, LEN);
  SelectionSort(numbers, LEN);
  Print(numbers, LEN);

  return 0;
}

// arr: the (copy of the) address of the first element of the `numbers` array
void SelectionSort(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    int min_index = GetMinIndex(arr, i, len);

    // ERROR: WrongSwap(arr[i], arr[min_index]);
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
}

int GetMinIndex(const int arr[], int begin, int end) {
  int min = arr[begin];
  int min_index = begin;

  for (int i = begin + 1; i < end; ++i) {
    if (arr[i] < min) {
      min = arr[i];
      min_index = i;
    }
  }

  return min_index;
}

void WrongSwap(int left, int right) {
  int temp = left;
  left = right;
  right = temp;
}

void Print(const int arr[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}