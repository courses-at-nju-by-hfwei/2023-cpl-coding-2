// file: double-pointers.c
// For review purpose.

// Visualization: https://pythontutor.com/render.html#code=int%20main%28void%29%20%7B%0A%20%20char%20*names%5B%5D%20%3D%20%7B%0A%20%20%20%20%22Luo%20Dayou%22,%0A%20%20%20%20%22Cui%20Jian%22,%0A%20%20%20%20%22Zhang%20Chu%22,%0A%20%20%7D%3B%0A%20%20%0A%20%20char%20*name_ptr%20%3D%20%22Zhang%20Chu%22%3B%0A%20%20char%20name_arr%5B%5D%20%3D%20%22Zhang%20Chu%22%3B%0A%20%20%0A%20%20int%20scores%5B%5D%5B3%5D%20%3D%20%7B%0A%20%20%20%20%7B0,%2010,%2020%7D,%0A%20%20%20%20%7B10,%2020,%2030%7D,%0A%20%20%20%20%7B30,%2040,%2050%7D,%0A%20%20%7D%3B%0A%20%20%0A%20%20int%20%28*scores_ptr%29%5B3%5D%20%3D%20scores%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&cppShowMemAddrs=true&cumulative=true&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false

int main(void) {
  char *names[] = {
      "Luo Dayou",
      "Cui Jian",
      "Zhang Chu",
  };

  char *name_ptr = "Zhang Chu";
  char name_arr[] = "Zhang Chu";

  int scores[][3] = {
      { 0, 10, 20 },
      { 10, 20, 30 },
      { 30, 40, 50 },
  };

  int (*scores_ptr)[3] = scores;

  return 0;
}