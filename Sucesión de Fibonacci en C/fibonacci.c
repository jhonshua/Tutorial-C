/**
 * @file Fibonacci.c
 * @author julio llinas
 * @brief 
 * @version 0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

include '<stdio.h>'

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  int n;
  
  printf("Introduzca un número: ");
  scanf("%d", &n);

  printf("El %dº número de Fibonacci es: %d\n", n, fibonacci(n));

  return 0;
}


