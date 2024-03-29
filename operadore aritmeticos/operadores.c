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
    int numbera;
    int numberb;
    int suma ;
    int diferencia ;
    int producto ;
    int division ;
    int resto ;

printf("Este programa realiza diferentes operaciones\n");
printf("presiones enter para continuar:\n");
system("pause"); 

printf("ingrese el primer valor\n");
scanf("%d", &numbera);
printf("ingrese el segundo valor\n");
scanf("%d", &numberb);

suma = numbera + numberb; // Suma de a y b
diferencia = numbera - numberb; // Resta de a y b
producto = numbera * numberb; // Multiplicación de a y b
division = numbera / numberb; // División de a y b
resto = numbera % numberb; // Resto de la división de a y b

printf("Suma: %d\n", suma);
printf("Diferencia: %d\n", diferencia);
printf("Producto: %d\n", producto);
printf("División: %d\n", division);
printf("Resto: %d\n", resto);

}
    
