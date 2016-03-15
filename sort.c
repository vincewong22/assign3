#include <stdlib.h>
#include "sort.h"

/* a static function cannot be linked from another file */
static int cmp_asc(const void *p, const void *q);
static int cmp_des(const void *p, const void *q);

void sort_asc(int a[], size_t n) {
  qsort(a, n, sizeof(a[0]), cmp_asc);
}

int cmp_asc(const void *p, const void *q) {
  const int *pp = p;
  const int *qq = q;
  return *pp - *qq;
}

void sort_des(int a[], size_t n) {
  qsort(a, n, sizeof(a[0]), cmp_des);
}

int cmp_des(const void *p, const void *q) {
  const int *pp = p;
  const int *qq = q;
  return *qq - *pp;
}
