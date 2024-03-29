/**
 * @file objetos.c
 * @author julio llinas 
 * @brief 
 * @version 0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <string.h>

// Definición de la estructura "Persona"
typedef struct {
  char nombre[50];
  int edad;
} Persona;

// Función para imprimir los datos de una persona
void imprimirPersona(Persona* persona) {
  printf("Nombre: %s\n", persona->nombre);
  printf("Edad: %d\n", persona->edad);
}

int main() {
  // Declaración de una variable de tipo "Persona"
  Persona persona1;

  // Asignación de valores a los miembros de la variable
  strcpy(persona1.nombre, "Juan Pérez");
  persona1.edad = 30;

  // Impresión de los datos de la persona
  imprimirPersona(&persona1);

  return 0;
}
