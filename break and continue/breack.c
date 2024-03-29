/**
 * @file breack.c
 * @author julio llinas 
 * @brief 
 * @version 0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 
 * En este ejemplo, se utiliza break para salir del bucle when 
 * el usuario introduce un 0 y continue para evitar procesar números negativos.
 * Se pueden usar break y continue en diferentes situaciones para controlar 
 * el flujo de ejecución de un programa.
 */


#include <stdio.h>

int main() {
  int numero, suma = 0, contador = 0;

  // Bucle para pedir datos al usuario
  while (1) {
    printf("Introduzca un número (0 para salir): ");
    scanf("%d", &numero);

    // Salir del bucle si el usuario introduce 0
    if (numero == 0) {
      break;
    }

    // Continuar con la siguiente iteración si el número es negativo
    if (numero < 0) {
      continue;
    }

    // Sumar el número al total y aumentar el contador
    suma += numero;
    contador++;
  }

  // Calcular y mostrar la media
  if (contador > 0) {
    float media = (float)suma / contador;
    printf("La suma de los números positivos es: %d\n", suma);
    printf("La media de los números positivos es: %.2f\n", media);
  } else {
    printf("No se ha introducido ningún número positivo.\n");
  }

  return 0;
}
