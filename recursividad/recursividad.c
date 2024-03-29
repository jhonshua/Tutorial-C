/**
 * @file recursividad.c
 * @author julio llinas
 * @brief 
 * @version 0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */
include '<stdio.h>'



int factorial(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n;
  
  printf("Introduzca un número: ");
  scanf("%d", &n);

  printf("El factorial de %d es: %d\n", n, factorial(n));

  return 0;
}