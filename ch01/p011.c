#include <stdio.h>

int main() {
  int num = 5;
  int *pi = &num;
  printf("%d\n", *pi);
  printf("%p\n", pi);

  *pi = 200;
  printf("%d\n", num);
  return 0;
}