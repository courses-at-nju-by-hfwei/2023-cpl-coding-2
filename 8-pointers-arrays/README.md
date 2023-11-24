# 8-pointer

## `radius.c`

### On Variables
- type, value, address
- `&`: address-of operator
- printf the address (`%p`)
- `lvalue`, `rvalue`???

### On Pointers
- `int *` syntax
- int * vs. double * (type cast???)
- refs to itself (int ** vs. int *)
- Visualization

- `scanf`: how does it work???

## `Swap` (`selection-sort.c`)
- `WrongSwap`
- `Swap`
- Visualization

## Pointers and Arrays (`selection-sort.c`)

- `()`: function call operator
  - `SelectionSort(numbers, LEN)`
- `int arr[]` vs. `(int *arr)`
- `numbers[i]` vs. `*(numbers + i)`
  - pointers arithmetic (in arrays!!!)
  - `pointer + int`, `pointer - int`, `pointer - pointer`
- `&numbers[i]` vs. `numbers + i`

## Array Name (`selection-sort.c`)
- `int arr[] = {1, 2, 3};`
- `arr++`
- `numbers++`

## Dynamic Memory Management (`selection-sort.c`)

- VLA
- `malloc.h` vs. `stdlib.h`
- `malloc`
  - `void *`
    - `int *`
    - `sizeof(*numbers)`
  - size = 0: implementation-defined
  - `unsigned long long`
- `NULL`
  - `(void *) 0`
- `free`
  - memory leak (heap)
  - **undefined behaviors**
    - double `free`
    - `free` non-`malloc`
      - `numbers = NULL`
    - dereference `free`d memory

## `const` in `Print` (`selection-sort.c`)