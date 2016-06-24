#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2) exit(2);

  int n = atoi(argv[1]);

  while (n != 1) {
    n = (n % 2) ? (3 * n + 1) : (n / 2);
    printf("%d\n", n);
  }

  return 0;
}
