#include <stdio.h>
#include <stdlib.h>


int main(){
    int num1;
    int num2;
    int resultado;

printf("Este programa resta dos valores\n");
printf("presiones enter para continuar:\n");
system("pause"); 

printf("ingrese el primer valor\n");
scanf("%d",&num1);
printf("ingrese el segundo valor\n");
scanf("%d",&num2);

resultado = num1 - num2;
printf("el resultado de la resta es: %d\n", resultado);
return 0;

}