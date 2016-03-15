/* sorting integers obtained from user:
 * a basic example on using multiple .c files
 * compile with:
 *   gcc -ansi -W -Wall -pedantic -c main.c
 *   gcc -ansi -W -Wall -pedantic -c io.c
 *   gcc -ansi -W -Wall -pedantic -c sort.c
 *   gcc main.o io.o sort.o
 */
#include <string.h>
#include "io.h"
#include "sort.h"

#ifndef N
  #define N 10
#endif

int main(int argc, char *argv[]) {
  int a[N];

  size_t n = get_ints(a, N);

  if (argc == 1) {
    print(a, n);
    return 0;
  }

  if (strcmp(argv[1], "+") == 0)
    sort_asc(a, n);
  else
    sort_des(a, n);
  print(a, n);

  return 0;
}
