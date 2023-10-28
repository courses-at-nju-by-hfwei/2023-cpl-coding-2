//
// Created by hfwei on 2023/10/12.
//

#include <stdio.h>

#define LEN 20
int numbers[LEN] = { 0 };

void SelectionSort(int arr[], int len);
int GetMinIndex(const int arr[], int begin, int end);
void Swap(int left, int right);
void Print(const int arr[], int len);

int main(void) {
  int len = -1;
  while (scanf("%d", &numbers[++len]) != EOF);

  Print(numbers, len);
  SelectionSort(numbers, len);
  Print(numbers, len);

  return 0;
}

void SelectionSort(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    int min_index = GetMinIndex(arr, i, len);

    // swap arr[i] and arr[min_index]
    // Swap(left, right)
    // arr[i] = 3   arr[min_index] = 5
    // left = 3   right = 5
    // Swap(arr[i], arr[min_index]);

    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
}

int GetMinIndex(const int arr[], int begin, int end) {
  int min = arr[begin];
  int min_index = begin;

  for (int j = begin + 1; j <= end - 1; ++j) {
    if (arr[j] < min) {
      min = arr[j];
      min_index = j;
    }
  }

  return min_index;
}

// left = 3   right = 5
void Swap(int left, int right) {
  int temp = left;
  left = right;
  right = temp;
  // left = 5 right = 3
}

void Print(const int arr[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}