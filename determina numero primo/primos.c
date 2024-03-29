/**
 * @file primos.c
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
  int numero, divisor, esPrimo = 1;

  // Pedir al usuario un número
  printf("Introduzca un número: ");
  scanf("%d", &numero);

  // Si el número es 1, no es primo
  if (numero == 1) {
    esPrimo = 0;
  } else {
    // Recorrer los divisores desde 2 hasta la raíz cuadrada del número
    for (divisor = 2; divisor * divisor <= numero; divisor++) {
      // Si el número es divisible por un divisor, no es primo
      if (numero % divisor == 0) {
        esPrimo = 0;
        break;
      }
    }
  }

  // Mostrar el resultado
  if (esPrimo) {
    printf("El número %d es primo.\n", numero);
  } else {
    printf("El número %d no es primo.\n", numero);
  }

  return 0;
}
