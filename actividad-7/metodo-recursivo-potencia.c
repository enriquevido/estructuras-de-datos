#include <stdio.h>

int potencia(int numero, int exponente) {
  if (exponente == 1) {
    return numero;
  }
  if (exponente == 0) {
    return 1;
  } else {
    return numero * potencia(numero, exponente - 1);
  }
}

int main() {
  int n_base, n_potencia;
  printf("Introduce tu base: ");
  scanf("%d", &n_base);
  printf("Introduce tu exponente: ");
  scanf("%d", &n_potencia);
  printf("%d", potencia(n_base, n_potencia));
  return 0;
}