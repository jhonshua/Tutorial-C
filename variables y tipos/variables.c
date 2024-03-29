/**
 * @file variables.c
 * @author julio llinas 
 * @brief 
 * @version 0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 1. Enteros:

char: Almacena un carácter (un byte).
short int: Almacena un número entero corto (dos bytes).
int: Almacena un número entero (cuatro bytes).
long int: Almacena un número entero largo (ocho bytes).
2. De punto flotante:

float: Almacena un número de punto flotante de precisión simple (cuatro bytes).
double: Almacena un número de punto flotante de precisión doble (ocho bytes).
long double: Almacena un número de punto flotante de precisión extendida (10 bytes).
3. Otros tipos:

void: Indica la ausencia de un tipo de dato.
const: Se utiliza para declarar variables que no se pueden modificar.
 
 */


#include <stdio.h>

int main() {
    char C = 'y'; // tamano de 1 byte 0...255
    int a  = 20;  //  2 bytes -32768 ... 32767
    short e = -1; // 2 byte   -128 ... 127
    unsigned int u = 25;// 2 byte 0 ... 65535
    long l = 5932; // 4 bytes -2147483647 ... -2147483647
  return 0; // termina el programa
}
