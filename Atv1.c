// Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de
// f(x).
#include <math.h>
#include <stdio.h>

int main() {
  float x, f;

  printf("Para calcularmos o f(x) me informe o valor x que deseja: ");
  scanf("%f", &x);
  while (getchar() != '\n')
    ;

  f = (5 * x + 3) / sqrt(pow(x, 2) - 16);

  printf("F(x) = %.2f;", f);

  return 0;
}