#include <stdio.h>

int metodo_recursivo(int n) {
  if (n <= 1) {
    return n;
  } else {
      printf("%d\n", n);
      return metodo_recursivo(n - 1);
  }
}

int main() {
  printf("%d", metodo_recursivo(4));
  return 0;
}