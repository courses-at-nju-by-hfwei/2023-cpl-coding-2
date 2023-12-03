//
// file: strlen.c
// Created by hfwei on 2023/11/29.
// See https://en.cppreference.com/w/c/string/byte/strlen
//

#include <stdio.h>

int StrLen(const char *str);
int StrLen1(const char *str);
int StrLen2(const char *str);
size_t StrLenStd(const char *str);

int main() {
  char msg[] = "Hello World!";

  printf("StrLen(%s) = %d\n", msg, StrLen(msg));
  printf("StrLen1(%s) = %d\n", msg, StrLen1(msg));
  // printf("StrLenStd(%s) = %zu\n", msg, StrLenStd(msg));

  return 0;
}

int StrLen(const char *str) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }

  return len;
}

int StrLen1(const char *str) {
  int len = 0;
  while (str[len++] != '\0');

  return len - 1;
}

int StrLen2(const char *str) {
  int len = -1;
  while (str[++len]!= '\0');

  return len;
}

size_t StrLenStd(const char *str) {
  const char *sc;
  for (sc = str; *sc != '\0'; ++sc);

  return sc - str;
}