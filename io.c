#include <stdio.h>
#include "io.h"




size_t get_ints(int a[], size_t n) {
  size_t  i;

  for (i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      break;

  return i;
}

void print(const int a[], size_t n) {
  size_t  i;

  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

