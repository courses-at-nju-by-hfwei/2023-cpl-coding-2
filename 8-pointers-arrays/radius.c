/**
 * file: radius.c
 *
 * Created by hengxin on 11/24/23.
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main() {
  /********** On radius1 **********/
  // type: int; value: 100; address: &radius1 (&: address-of operator)
  int radius1 = 100;

  printf("radius1 = %d\n", radius1);
  printf("&radius1 = %p\n", &radius1);

  radius1 = 200;
  double circumference = 2 * PI * radius1;
  // printf("circumference = %f\n", circumference);
  /********** On radius1 **********/

  /********** On ptr_radius1 **********/
  // type: int *; value: &radius1
  int *ptr_radius1 = &radius1;

  printf("&ptr_radius1 = %p\n", &ptr_radius1);

  /********** On ptr_radius1 **********/

  /********** On *ptr_radius1 **********/
  // *: indirection/dereference operator
  // *ptr_radius1 behaves like radius1
  *ptr_radius1 = 200;
  printf("radius1 = %d\n", radius1);
  circumference = 2 * PI * (*ptr_radius1);
  /********** On *ptr_radius1 **********/

  /********** On ptr_radius1 as lvalue and rvalue **********/
  int radius_1 = 1000;
  int *ptr_radius_1 = &radius_1;

  ptr_radius1 = ptr_radius_1;
  *ptr_radius_1 = 2000;
  printf("radius_1 = %d\n", *ptr_radius1);
  /********** On ptr_radius1 as lvalue and rvalue **********/

  int v = 100;
  int *pv = &v;
  // pv = &pv;

  /********** On array names **********/
  int arr[] = {1, 2, 3};
  // arr = arr + 1;
  /********** On array names **********/

  /********** On malloc/free **********/
  int var = 10;
  // free(var);
  free(arr);
  /********** On malloc/free **********/

  /********** On const **********/
  // v: int, const int
  // pv: int *, int * const
  // const int *, const int * const, int const *, int const * const
  /********** On const **********/

  return 0;
}