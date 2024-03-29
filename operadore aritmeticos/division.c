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

#include <stdio.h>
#include <stdlib.h>


int main(){
    int num1;
    int num2;
    int resultado;

printf("Este programa divide dos valores\n");
printf("presiones enter para continuar:\n");
system("pause"); 

printf("ingrese el primer valor\n");
scanf("%d",&num1);
printf("ingrese el segundo valor\n");
scanf("%d",&num2);

resultado = num1 / num2;
printf("el resultado de la division es: %d\n", resultado);
return 0;

}