#include <stdio.h>

int power();

int main() {
  return power(2, 4);
}

int power(base, n)
int base, n;
{
  int i, p;

  p = 1;
  for ( i = 0; i < n; ++i ) p *= base;

  return p;
}
