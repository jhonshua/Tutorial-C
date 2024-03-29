/**
 * @file arrays.c
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
  int numeros[5]; // Declaración de un array de 5 enteros
  int i, suma = 0;

  printf("Este programa a continuacion le\n ");
  printf("solicitara un array de 5 entero\n ");
  printf("y se procedera a sumar todo sus elementos internos. ");

  // Leer los valores del array del usuario
  for (i = 0; i < 5; i++) {
    printf("Ingrese el valor del elemento %d: ", i);
    scanf("%d", &numeros[i]);
  }

  // Calcular la suma de los elementos del array
  for (i = 0; i < 5; i++) {
    suma += numeros[i];
  }

  // Imprimir la suma total
  printf("La suma de los elementos del array es: %d\n", suma);

  return 0;
}

