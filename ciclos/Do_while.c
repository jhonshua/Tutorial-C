/**
 * @file Do_While.c
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
  int numero, i = 1;

  // Solicitar al usuario un número
  printf("Ingrese un número: ");
  scanf("%d", &numero);

  // Bucle do-while que se ejecuta al menos una vez
  do {
    // Imprimir la fila actual de la tabla
    printf("%d x %d = %d\n", numero, i, numero * i);

    // Incrementar el valor de i
    i++;

  } while (i <= 10);

  return 0;
}