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
  char letra;

  // Solicitar al usuario una letra
  printf("Ingrese una letra: ");
  scanf(" %c", &letra);

  // Evaluar la letra con switch
  switch (letra) {
    case 'a':
    case 'A':
      printf("La letra es una vocal: a\n");
      break;
    case 'e':
    case 'E':
      printf("La letra es una vocal: e\n");
      break;
    case 'i':
    case 'I':
      printf("La letra es una vocal: i\n");
      break;
    case 'o':
    case 'O':
      printf("La letra es una vocal: o\n");
      break;
    case 'u':
    case 'U':
      printf("La letra es una vocal: u\n");
      break;
    default:
      printf("La letra no es una vocal.\n");
  }

  return 0;
}
