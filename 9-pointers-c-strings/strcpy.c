//
// file: strcpy.c
// 7 versions of strcpy
// Created by hfwei on 2022/11/29.
//
// C Operator Precedence: https://en.cppreference.com/w/c/language/operator_precedence#:~:text=C%20Operator%20Precedence%20%20%20%20Precedence%20,union%20member%20access%20%2028%20more%20rows%20
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void StrCpy(char *dest, const char *src);
void StrCpy1(char *dest, const char *src);
void StrCpy2(char *dest, const char *src);
void StrCpy3(char *dest, const char *src);
void StrCpy4(char *dest, const char *src);
void StrCpy5(char *dest, const char *src);
char *StrCpyStd(char *dest, const char *src);

int main() {
  const char *src = "Hello World";
  char *dest = malloc(strlen(src) + 1);

  StrCpy(dest, src);
  strlen(dest);
  printf("dest = %s\n", dest);

  StrCpy3(dest, src);
  StrCpy4(dest, src);

  strlen(StrCpyStd(dest, src));
  return 0;
}

void StrCpy(char *dest, const char *src) {
  int i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }

  dest[i] = '\0';
}

void StrCpy1(char *dest, const char *src) {
  int i = 0;
  while ((dest[i] = src[i]) != '\0') {
    i++;
  }
}

void StrCpy2(char *dest, const char *src) {
  int i = 0;
  // src[i] : *(src + i)
  while ((*(dest + i) = *(src + i)) != '\0') {
    i++;
  }
}

void StrCpy3(char *dest, const char *src) {
  while ((*dest = *src) != '\0') {
    src++;
    dest++;
  }

  // printf("%s\n", src);
}

void StrCpy4(char *dest, const char *src) {
  // dest++: dest + 1; evaluated to dest
  // *++dest
  while ((*dest++ = *src++) != '\0');

  // printf("%s\n", src);
}

// Not Recommended!!!!
void StrCpy5(char *dest, const char *src) {
  // NULL: null pointer; (void *) 0
  // '\0': Null; 0
  while ((*dest++ = *src++));
}

char *StrCpyStd(char *dest, const char *src) {
  for (char *s = dest; (*s++ = *src++) != '\0'; );
  return dest;
}