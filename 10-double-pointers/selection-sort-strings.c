// file: selection-sort-strings.c
// Created by hfwei on 2023/12/07.

#include <stdio.h>
#include <string.h>

#define LEN 10

void SelectionSort(const char *arr[], int len);
int GetMinIndex(const char *arr[], int begin, int end);
void Swap(const char **left, const char **right);
void Print(const char *arr[], int len);

int main(void) {
  const char *musicians[LEN] = {
    "Luo Dayou",
    "Cui Jian",
    "Dou Wei",
    "Zhang Chu",
    "Wan Qing",
    "Li Zhi",
    "Yao",
    "ZuoXiao",
    "ErShou Rose",
    "Hu Mage",
  };

  Print(musicians, LEN);
  SelectionSort(musicians, LEN);
  Print(musicians, LEN);

  return 0;
}

void SelectionSort(const char * arr[], int len) {
  for (int i = 0; i < len; i++) {
    int min_index = GetMinIndex(arr, i, len);

    // arr: char *[]
    // char**
    // const char **
    Swap(arr + i, arr + min_index);
  }
}

int GetMinIndex(const char *arr[], int begin, int end) {
  const char *min = arr[begin];
  int min_index = begin;

  for (int i = begin + 1; i < end; ++i) {
    if (strcmp(arr[i], min) < 0) {
      min = arr[i];
      min_index = i;
    }
  }

  return min_index;
}

void Swap(const char **left, const char **right) {
  const char *temp = *left;
  *left = *right;
  *right = temp;
}

void Print(const char *arr[], int len) {
  for (int i = 0; i < len; i++) {
    // arr[i]
    printf("%s\n", arr[i]);
  }
  printf("\n");
}