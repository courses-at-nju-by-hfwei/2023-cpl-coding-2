//
// file: strcmp.c
// Created by hfwei on 2022/11/29.
//

#include <stdio.h>

int StrCmp(const char *s1, const char *s2);

int main() {
  const char *str1 = "hi, C";
  const char *str2 = "hi, c";

  // printf("StrCmp(\"%s\", \"%s\") = %d\n",
  //        str1, str2, StrCmp(str1, str2));
  // printf("StrCmpStd(\"%s\", \"%s\") = %d\n",
  //        str1, str2, StrCmpStd(str1, str2));
  //
  // int n = 2;
  // printf("StrNCmp(\"%s\", \"%s\", %d) = %d\n",
  //        str1, str2, n, StrNCmp(str1, str2, n));

  return 0;
}



int StrCmp(const char *s1, const char *s2) {
  while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0')) {
    s1++;
    s2++;
  }

  if (*s1 == '\0' && *s2 == '\0') {
    return 0;
  }

  return (*(const unsigned char *) s1)
            < (*(const unsigned char *) s2) ? -1 : 1;
}

int StrCmpStd(const char *s1, const char *s2) {
  for ( ; *s1 == *s2; s1++, s2++) {
    if (*s1 == '\0') {
      return 0;
    }
  }

  return (*(const unsigned char *) s1)
             < (*(const unsigned char *) s2) ? -1 : 1;
}

// See https://en.cppreference.com/w/c/string/byte/strncmp
// Compares at most count characters of two possibly null-terminated arrays.
// The comparison is done lexicographically. Characters following the null character are not compared.
int StrNCmpStd(const char *s1, const char *s2, int n) {
  for (; 0 < n; n--, s1++, s2++) {
    if (*s1 != *s2) {
      return (*(const unsigned char *) s1)
                 < (*(const unsigned char *) s2) ? -1 : 1;
    } else if (*s1 == '\0') { // *s1 == *s2 == '\0'
      return 0;
    }
  }

  return 0;
}