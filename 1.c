#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);
  
  // 正しく演算が行われるようにn & 1 に括弧を追加
  if ((n & 1) == 0) {
    printf("%d は偶数です\n", n);
  } else {
    printf("%d は奇数です\n", n);
  }
  return 0;
}
