#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  // char
  // int
  // double
  // float
  // void
  // o padrão ANSI C determina o intervalo de valores que cada tipo de dado
  // suporta mofificadores long short signed unsigned
  //
  char letter[] = "n";

  char name[] = "Felipe";

  bool is_true = true;
  bool is_false = !true;

  unsigned long int amount;

  long double price = 10000;

  bool is_not_true = 0;

  printf("%ld \n", sizeof(amount)); // stdio
  // %ld -> print long int
  // %d print int

  // exit(0); // stdlib
  return 0;
}
