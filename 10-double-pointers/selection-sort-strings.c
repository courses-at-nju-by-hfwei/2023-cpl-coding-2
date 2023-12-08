// file: selection-sort-strings.c
// Created by hfwei on 2023/12/07.

#include <stdio.h>

#define LEN 5

void SelectionSort(int arr[], int len);
int GetMinIndex(int arr[], int begin, int end);
void Swap(int *left, int *right);
void Print(int arr[], int len);

int main(void) {
  int numbers[LEN] = { 15, 78, 23, 8, 50 };

  Print(numbers, LEN);
  SelectionSort(numbers, LEN);
  Print(numbers, LEN);

  return 0;
}

void SelectionSort(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    int min_index = GetMinIndex(arr, i, len);

    Swap(arr + i, arr + min_index);
  }
}

int GetMinIndex(int arr[], int begin, int end) {
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

void Swap(int *left, int *right) {
  int temp = *left;
  *left = *right;
  *right = temp;
}

void Print(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// "Luo Dayou",
// "Cui Jian",
// "Dou Wei",
// "Zhang Chu",
// "Wan Qing",
// "Li Zhi",
// "Yao",
// "ZuoXiao",
// "ErShou Rose",
// "Hu Mage",