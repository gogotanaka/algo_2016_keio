#include <stdio.h>
#include <stdlib.h>

int comb(int n, int k);

int main(int argc, char *argv[])
{
  if (argc != 3) exit(2);

  int n = atoi(argv[1]);
  int k = atoi(argv[2]);

  printf("%d\n", comb(n, k));

  return 0;
}

int comb(int n, int k)
{
  if (k > n) {
    printf("Need to have something n >= k\n");
    return 0;
  }

  if (k == 1) {
    return n;
  } else if (k == 0) {
    return 0;
  } else if (k == n) {
    return 1;
  } else {
    return comb(n - 1, k - 1) + comb(n - 1, k);
  }
}
