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
   *   stdin
   */
  int len = -1;
  // input failure (EOF, end of file, -1)
  // number of matched items
  while (scanf("%d", &numbers[++len]) != EOF);

  for (int i = 0; i < len; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  // TODO: selection sort
  for (int i = 0; i < len; ++i) {
    // find the minimum value in numbers[i .. n-1]
    int min = numbers[i];
    int min_index = i;

    for (int j = i + 1; j < len; ++j) {
      if (numbers[j] < min) {
        min = numbers[j];
        min_index = j;
      }
    }

    // swap numbers[i] and numbers[min_index]
    int temp = numbers[min_index];
    numbers[min_index] = numbers[i];
    numbers[i] = temp;
  }

  for (int i = 0; i < len; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}