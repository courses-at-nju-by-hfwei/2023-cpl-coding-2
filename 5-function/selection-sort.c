//
// Created by hfwei on 2023/10/12.
//

#include <stdio.h>

#define LEN 20
int numbers[LEN] = { 0 };

void SelectionSort(int arr[], int len);
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
    // find the minimum value of numbers[i .. n-1]
    int min = arr[i];
    int min_index = i;

    for (int j = i + 1; j <= len - 1; ++j) {
      if (arr[j] < min) {
        min = arr[j];
        min_index = j;
      }
    }

    // swap arr[i] and arr[min_index]
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
}

void Print(const int arr[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}