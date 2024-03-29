/**
 * @file condicionales.c
 * @author julio llinas 
 * @brief 
 * @version 0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1; // Se declara la variable num1 como un tipo de dato entero
  int num2;
  int resultado;

  printf("Este programa multiplica dos valores\n");
  printf("Presione Enter para continuar:\n");
  system("pause");

  printf("Ingrese el primer valor\n");
  scanf("%d", &num1); // Se utiliza %d para leer un valor entero

  printf("Ingrese el segundo valor\n");
  scanf("%d", &num2);

  resultado = num1 * num2;

  printf("El resultado de la multiplicación es: %d\n", resultado);

  return 0;
}