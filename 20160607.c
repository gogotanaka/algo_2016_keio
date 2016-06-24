#include <stdio.h>

void q5_1_1(void);
void q5_1_2(void);
void q5_1_3(void);

int main(void)
{
  q5_1_1();
  q5_1_2();
  q5_1_3();
}

#define for1to100 for (int i=1; i <= 100; i++)

void q5_1_1(void)
{
  for1to100 { printf("%d\n", i); }
}

void q5_1_2(void)
{
  int sum = 0;
  for1to100 { sum += i; }
  printf("%d\n", sum);
}

void q5_1_3(void)
{
  for1to100 {
    printf("1");
    if (!(i % 5)) printf(" ");
  }
}
