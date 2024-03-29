/**
 * @file For.c
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
  int numero, i;

 // Explicación del programa
  printf("Este programa muestra una tabla de multiplicar del numero ingresado.\n\n");

  // Solicitar al usuario el número a multiplicar
  printf("Ingrese un número: ");
  scanf("%d", &numero);

  // Imprimir encabezado de la tabla
  printf("Tabla del %d:\n\n", numero);

  // Ciclo for que se ejecuta 10 veces
  for (i = 1; i <= 10; i++) {
    // Imprimir la fila actual de la tabla
    printf("%d x %d = %d\n", numero, i, numero * i);
  }

  return 0;
}