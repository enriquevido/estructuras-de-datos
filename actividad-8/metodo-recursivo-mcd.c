#include <stdio.h>
int mcd(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return mcd(y, x % y);
  }
}

int main() {
  printf("El MCD es: %d", mcd(45, 15));
  return 0;
}