// file: main-re.c
//
// Created by hfwei on 2023/11/9.
//
// WARNING: You can even call the "main" function in itself.
// But, do NOT write code like this.
// Never call the "main" function in your own code.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    return 0;
  }

  printf("%s\n", argv[argc - 1]);

  main(argc - 1, argv);

  return 0;
}