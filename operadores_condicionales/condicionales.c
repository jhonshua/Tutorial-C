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


/*
Toma de Decisiones if
operadores de Igualdad     || Operadores de Relacion
== x es igual que y           >  x es mayor que y
!= x es diferente y           <  x es menor que y
                              >= x es mayor o igual que y
                              <= x es manor o igual que y
*/

#include <stdio.h>

int main() {
  int edad;

  //Solicitar la edad al usuario
  printf("Esta aplicación muestra un mensaje diferente según tu edad.\n\n");
  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  //Evaluar la edad con condicionales
  if (edad >= 18) {
    printf("Usted es mayor de edad.\n");
  } else if (edad >= 13) {
    printf("Usted es un adolescente.\n");
  } else {
    printf("Usted es un niño.\n");
  }

  return 0;
}