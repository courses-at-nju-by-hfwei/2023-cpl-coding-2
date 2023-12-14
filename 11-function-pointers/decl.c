/**
 * file: decl.c
 *
 * Created by hengxin on 2023/12/14.
 */

int main() {
  char **argv;

  int *names[10];

  int (*musician_score_table)[10];

  int *StrCpyStd(char *dest, const char *src);

  int (*comp)(const void *left, const void *right);

  // see https://en.cppreference.com/w/c/program/atexit
  int atexit(void (*func)(void));

  // see https://en.cppreference.com/w/c/program/signal
  void (*signal(int sig, void (*handler)(int)))(int);

  char (*(*func(int num, char *str))[])();

  char (*(*arr[3])())[5];

  // Refer to https://cdecl.org/ for more practice.
  // See https://c-faq.com/decl/spiral.anderson.html for secrets!!!
}