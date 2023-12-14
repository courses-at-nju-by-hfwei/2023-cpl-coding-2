//
// Created by hfwei on 2023/12/14.
//

#include <stdio.h>
#include <signal.h>

void SIGSEGV_Handler(int sig) {
  printf("SIGSEGV %d is caught.\n", sig);
}

int main(void) {
  signal(SIGSEGV, SIGSEGV_Handler);
  raise(SIGSEGV);

  // int *p = NULL;
  // *p = 0;

  return 0;
}