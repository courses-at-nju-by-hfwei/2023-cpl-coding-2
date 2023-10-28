//
// Created by hfwei on 2023/10/6.
//

#include <stdio.h>
#include <stdbool.h>

bool IsLeapYear(int year);

int main(void) {
  // local variable
  // scope: block scope
  int year = 0;
  scanf("%d", &year);

  // caller
  // callee
  bool leap = IsLeapYear(year);

  if (leap) {
    printf("%d is a leap year\n", year);
  } else {
    printf("%d is a common year\n", year);
  }

  return 0;
}

// year: formal parameter
// block scope
bool IsLeapYear(int year) {
  // local variable
  // scope: block scope
  bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
  return leap;
}