#include <stdio.h>

void main() {
  int cnt = 0;
  int c;
  while ( (c = getchar()) != EOF)
    if ( c != ' ' ) cnt++;
  printf("%d\n", cnt);
  return ;
}
