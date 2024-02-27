#include <iostream>

using namespace std;

int fibonacci(int numero) {
  if (numero <= 1) {
    return numero;
  } else {
    return (fibonacci(numero - 1) + fibonacci(numero - 2));
  }
}

int main() {
  cout << fibonacci(10);
  return 0;
}