//
// Created by hfwei on 2023/10/12.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 21
char string[LEN] = "";

int main() {
  // example: nolemon,nomelon
  printf("Input a string containing at most 20 characters.\n");
  scanf("%20s", string);

  int len = strlen(string);

  // int len = 0;
  // while (string[len] != '\0') {
  //   len++;
  // }

  // TODO: to test palindrome
  bool is_palindrome = true;

  // TODO: the for version
  // ',': comma operator
  // not int i = 0, int j = len - 1;
  // i < j or i <= j
  for (int i = 0, j = len - 1; i < j; i++, j--) {
    if (string[i] != string[j]) {
      is_palindrome = false;
      break;
    }
  }

  // TODO: the while version
  // int i = 0;
  // int j = len - 1;
  //
  // while (i < j) {
  //   if (string[i] != string[j]) {
  //     is_palindrome = false;
  //     break;
  //   }
  //   i++;
  //   j--;
  // }

  if (is_palindrome) {
    printf("Y\n");
  } else {
    printf("N\n");
  }

  return 0;
}