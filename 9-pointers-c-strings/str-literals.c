//
// Created by hfwei on 2023/11/30.
// Visualization:https://pythontutor.com/render.html#code=//%0A//%20Created%20by%20hfwei%20on%202023/11/30.%0A//%0A%0A%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28void%29%20%7B%0A%20%20char%20msg%5B%5D%20%3D%20%22Hello%20World!%22%3B%0A%20%20printf%28%22%25s%5Cn%22,%20msg%29%3B%0A%0A%20%20msg%5B0%5D%20%3D%20'N'%3B%0A%20%20printf%28%22%25s%5Cn%22,%20msg%29%3B%0A%0A%20%20//%20string%20literal%3B%0A%20%20//%20may%20be%20stored%20in%20read-only%20memory%0A%20%20char%20*ptr_msg%20%3D%20%22Hello%20World!%22%3B%0A%0A%20%20//%20undefined%20behavior%0A%0A%20%20//%20On%20Linux%20%28or%20Debug%20mode%20on%20Windows%29%3A%20interrupted%20by%20signal%2011%3A%20SIGSEGV%0A%20%20//%20SIG%3A%20signal%3B%20SEGV%3A%20segmentation%20violation%0A%0A%20%20//%20On%20Windows%3A%20Process%20finished%20with%20exit%20code%20-1073741819%20%280xC0000005%29%0A%20%20//%20See%20https%3A//learn.microsoft.com/en-us/openspecs/windows_protocols/ms-erref/596a1078-e883-4972-9bbc-49e60bebca55%0A%20%20ptr_msg%5B0%5D%20%3D%20'N'%3B%0A%20%20printf%28%22%25s%5Cn%22,%20msg%29%3B%0A%0A%20%20return%200%3B%0A%7D&cppShowMemAddrs=true&cumulative=true&curInstr=7&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
// See String literals: https://en.cppreference.com/w/c/language/string_literal
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char msg[] = "Hello World!";
  msg[0] = 'N';
  printf("%s\n", msg);

  char *ptr_msg = "Hello World!";
  ptr_msg[0] = 'N';
  printf("%s\n", msg);

  return 0;
}