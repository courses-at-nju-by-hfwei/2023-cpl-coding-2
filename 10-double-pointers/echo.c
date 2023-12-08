/**
 * file: echo.c
 *
 * Echo program (command-line) arguments.
 *
 * Visualization: https://pythontutor.com/render.html#code=%0A%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20const%20char%20*arguments%5B%5D%20%3D%20%7B%0A%20%20%20%20%20%20%22ant%22,%0A%20%20%20%20%20%20%22hengxin%22,%0A%20%20%7D%3B%0A%0A%20%20//%20for%20version%20with%20argv%0A%20%20for%20%28int%20i%20%3D%201%3B%20%0A%20%20%20%20%20%20i%20%3C%20argc%3B%20%0A%20%20%20%20%20%20%20%20%2B%2Bi%29%20%7B%0A%20%20%20%20printf%28%22argv%5B%25d%5D%20%3D%20%25s%5Cn%22,%20i,%20argv%5Bi%5D%29%3B%0A%20%20%7D%0A%0A%0A%20%20//%20WRONG%20Version!!!%20%28no%20ant%20any%20more%29%0A%20%20//%20Wrong%20version%20%28also%20Segmentation%20Fault%3F%3F%3F%29%0A%20%20char%20**ptr%20%3D%20argv%20%2B%201%3B%0A%20%20while%20%28*ptr%2B%2B%20!%3D%20NULL%29%20%7B%0A%20%20%20%20printf%28%22%25s%5Cn%22,%20*ptr%29%3B%0A%20%20%7D%0A%0A%20%20return%200%3B%0A%7D&cumulative=true&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
 *
 * Created by hengxin on 12/07/23.
 */

#include <stdio.h>

// arg: argument
// c: count
// v: vector
// argv[0]: the name of the program
// argv[1 .. argc - 1]: command line arguments
// argv[argc]: NULL
int main(int argc, char *argv[]) {
  // for version with argv
  // for (int i = 1; i < argc; ++i) {
  //   printf("argv[%d] = %s\n", i, argv[i]);
  // }

  // for version with pointers
  // for (char **ptr = argv + 1; *ptr != NULL; ptr++) {
  //   printf("%s\n", *ptr);
  // }

  // while version
  // char **ptr = argv + 1;
  // while (*ptr != NULL) {
  //   printf("%s\n", *ptr);
  //   ptr++;
  // }

  // WRONG
  // char **ptr = argv + 1;
  // while (*ptr++ != NULL) {
  //   printf("%s\n", *ptr);
  //   // ptr++;
  // }

  char **ptr = argv;
  // *++ptr
  // *ptr++
  // *--ptr
  // *ptr--
  while (*++ptr != NULL) {
    printf("%s\n", *ptr);
    // ptr++;
  }

  return 0;
}