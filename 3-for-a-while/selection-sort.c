//
// Created by hfwei on 2023/10/12.
//

#include <stdio.h>

#define LEN 20
int numbers[LEN] = { 0 };

int main(void) {
  /*
   * Input the array
   *
   * Note: fails to run this program in "Run" (Ctrl + D)
   * See: https://youtrack.jetbrains.com/issue/CPP-5704
   * Use "Terminal" instead.
   *
   * TODO: CLion; Terminal
   * Linux: Ctrl + D (works now; in the new line, or Ctrl + D twice)
   *   See https://stackoverflow.com/a/21365313/1833118 (send and clear the buffer)
   * Windows: Ctrl + Z (does not work on my platform)
   * TODO: Input&Output redirection
   *   See https://stackoverflow.com/a/11788475/1833118
   */
  int len = -1;
  while (scanf("%d", &numbers[++len]) != EOF);

  for (int i = 0; i < len; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  // TODO: selection sort

  return 0;
}