# `3-for-a-while`

## `stars.c`

- double loops
- `for (int i = 0) + for (int j = 0)`

## `primes.c`

- double loops
- `int is_prime = 1;`: why 1? why not 0?
- `if (is_prime)` vs. `if (is_prime != 0)` vs. `if (is_prime == 1)`
- testing
  - https://www.wolframalpha.com/input?i=+primes+less+than+100000
  - mma: `PrimePi[100000]`
  - `number = 2`
- `break`
- `i * i <= number` vs. `i * i < number`
- `stdbool.h`
  - C89, C99, C23
  - `bool b = 5`
  - `(bool) 3.5`
- [x] timing
  - `clock_t start = clock(); clock_t end = clock(); (end - start) / CLOCKS_PER_SEC`

# `binary-search.c`

- already sorted array
  - Fib
- `int index = -1;`
  - `printf`
- `break`
- testing
  - `1`: the leftmost/rightmost one
  - search for the leftmost/rightmost one
- [ ] learn from the standard library???
  - `(low + high) / 2`
    - `low + (high - low) / 2`
    - [ ] try it???

## `digits.c`

- testing
- `do-while`

## `selection-sort.c`

- preparation: scanf
- with comments
- `swap`
- `while (scanf ...)`
  - https://en.cppreference.com/w/c/io/fscanf
    - Number of receiving arguments successfully assigned (which may be zero in case a matching failure occurred before
      the first receiving argument was assigned)
    - or `EOF` if input failure occurs before the first receiving argument was assigned
  - How to run this?
    - Linux: `Ctrl + D` at the beginning of a line
    - Mac: `Cmd + D` at the beginning of a line
    - Windows: `Ctrl + Z` at the beginning of a line
- more `printf` (after each iteration)
- `sizeof`
- Input&Output indirection
  - Linux/Windows Cmd

## `palindrome.c`

- `#define`: pre-processing
- `scanf("%20s", string);`
- `strlen`
- comma expression
- `for` version
- `while` version