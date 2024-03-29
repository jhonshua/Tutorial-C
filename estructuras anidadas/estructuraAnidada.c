/**
 * @file estructuraAnidada.c
 * @author julio llinas
 * @brief 
 * @version 0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 
#Las estructuras anidadas en C te permiten crear 
estructuras que contienen otras estructuras como miembros. 
* 
 */

#include <stdio.h>
#include <string.h>

typedef struct {
  char nombre[50];
  int edad;
} Persona;

typedef struct {
  Persona persona1;
  Persona persona2;
} Familia;

int main() {
  Familia familia;

  // Asignar valores a la primera persona
  strcpy(familia.persona1.nombre, "Juan Pérez");
  familia.persona1.edad = 30;

  // Asignar valores a la segunda persona
  strcpy(familia.persona2.nombre, "María López");
  familia.persona2.edad = 25;

  // Imprimir los nombres de las personas
  printf("Nombre de la primera persona: %s\n", familia.persona1.nombre);
  printf("Nombre de la segunda persona: %s\n", familia.persona2.nombre);

  return 0;
}


