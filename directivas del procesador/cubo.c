/**
 * @file calculoCubo.c
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

#define CUBO(x) (x * x * x)

int main() {
  float numero;
  float cubo;

  //Solicitar el número al usuario
  printf("Ingrese un número: ");
  scanf("%f", &numero);

  //Calcular el cubo del número usando la macro CUBO
  cubo = CUBO(numero);

  //Mostrar el resultado
  printf("El cubo de %f es %f\n", numero, cubo);

  return 0;
}
