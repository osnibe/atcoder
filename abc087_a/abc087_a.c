/*
https://atcoder.jp/contests/abc118/tasks/abc118_a
$ gcc abc118_a.c
*/

#include <stdio.h>

int main(void)
{
  char buf[100];
  int A, B;

  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d %d", &A, &B);

  if (B % A == 0)
    printf("%d\n", A + B);
  else
    printf("%d\n", B - A);

  return 0;
}
