#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);
  
  // n & 1 が偶数判定になるように括弧を追加
  if ((n & 1) == 0) {
    printf("%d は偶数です\n", n);
  } else {
    printf("%d は奇数です\n", n);
  }
  return 0;
}
