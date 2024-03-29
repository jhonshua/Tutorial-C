/**
 * @file While.c
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

  // Inicializar la variable i
  i = 1;


  // Imprimir encabezado de la tabla
  printf("Tabla del %d:\n\n", numero);

  // Ciclo while que se ejecuta mientras i sea menor o igual que 10
  while (i <= 10) {
    // Imprimir la fila actual de la tabla
    printf("%d x %d = %d\n", numero, i, numero * i);

    // Incrementar el valor de i
    i++;
  }

  return 0;
}
