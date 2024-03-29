/**
 * @file convert.c
 * @author julio llinas 
 * @brief 
 * @version 0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
  int numero;

  // Pedir al usuario que ingrese un número
  printf("Ingrese un número: ");
  scanf("%d", &numero);

  // Imprimir el número en diferentes tipos de datos
  printf("Número como entero: %d\n", numero);
  printf("Número como caracter: %c\n", numero);
  printf("Número como flotante: %f\n", (float)numero);
  printf("Número como doble: %lf\n", (double)numero);

  return 0;
}
