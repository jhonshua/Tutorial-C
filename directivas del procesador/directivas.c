/**
 * @file directivas.c
 * @author julio llinas
 * @brief 
 * @version 0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 
#include: Se utiliza para incluir el contenido de otro archivo en el código fuente actual.
#define: Se utiliza para definir una macro, que es un nombre corto que se puede usar como un sustituto de un valor o una expresión más compleja.
#ifdef: Se utiliza para verificar si una macro está definida.
#ifndef: Se utiliza para verificar si una macro no está definida.
#else: Se utiliza para proporcionar un código alternativo que se ejecuta si una condición no se cumple.
#endif: Se utiliza para finalizar una sección de código condicional.
 * 
 */

#include <stdio.h>

#define PI 3.1415926535

int main() {
  float radio;
  float area;

  printf("Ingrese el radio del círculo: ");
  scanf("%f", &radio);

  area = PI * radio * radio;

  printf("El área del círculo es: %f\n", area);

  return 0;
}
