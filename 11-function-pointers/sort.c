/**
 * file: sort.c
 *
 * Created by hengxin on 2023/12/13.
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

typedef int (*CompareFunction)(const void *, const void *);

int CompareInts(const void *left, const void *right);
int CompareStrs(const void *left, const void *right);
int CompareStrsWrong(const void *left, const void *right);

void PrintInts(const int *integers, size_t len);
void PrintStrs(const char *str[], size_t len);

int main() {
  int integers[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
  int size_of_integers = sizeof integers / sizeof *integers;

  // int (*comp)(const void *, const void *) = CompareInts;
  CompareFunction comp = CompareInts;
  qsort(integers, size_of_integers, sizeof integers[0],
        comp);
  PrintInts(integers, size_of_integers);

  const char *names[] = {
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
  size_t size_of_names = sizeof names / sizeof *names;

  comp = CompareStrs;
  qsort(names, size_of_names, sizeof names[0],
        comp);
  PrintStrs(names, size_of_names);

  qsort(names, size_of_names, sizeof names[0],
        CompareStrs);
  PrintStrs(names, size_of_names);
}

// left, right: int *
int CompareInts(const void *left, const void *right) {
  int left_int = *(const int *) left;
  int right_int = *(const int *) right;

  return (left_int > right_int) - (left_int < right_int);
}

// left, right: char **
int CompareStrs(const void *left, const void *right) {
  const char *const *left_str = left;
  const char *const *right_str = right;

  return strcmp(*left_str, *right_str);
}

int CompareStrsWrong(const void *left, const void *right) {
  const char *left_str = left;
  const char *right_str = right;

  return strcmp(left_str, right_str);
}

void PrintInts(const int *integers, size_t len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", integers[i]);
  }
  printf("\n");
}

void PrintStrs(const char *str[], size_t len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%s\n", str[i]);
  }
  printf("\n");
}