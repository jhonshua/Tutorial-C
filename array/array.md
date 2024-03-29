** Arrays y Cadenas en C **

Los arrays son variables estructuradas, donde cada elemento se almacena de forma consecutiva en memoria. Las cadenas de caracteres son declaradas en C como arrays de caracteres y permiten la utilización de un cierto número de notaciones y de funciones especiales.

1. Acceso a elementos:

array[indice]: Accede al elemento en la posición indice del array.
\*(array + indice): Accede al elemento en la posición indice del array (alternativa a array[indice]). 2. Recorrido de elementos:

for (i = 0; i < n; i++): Recorre todos los elementos del array desde el índice 0 hasta el índice n-1.
while (i < n): Recorre todos los elementos del array mientras que i sea menor que n. 3. Búsqueda de elementos:

for (i = 0; i < n; i++): Recorre todos los elementos del array y busca el valor especificado.
qsort(array, n, sizeof(tipo_dato), comparador): Ordena el array usando el algoritmo quicksort. 4. Modificación de elementos:

array[indice] = valor: Asigna el valor especificado al elemento en la posición indice del array.
\*(array + indice) = valor: Asigna el valor especificado al elemento en la posición indice del array (alternativa a array[indice] = valor). 5. Funciones con arrays:

void funcion(int array[], int n): Función que recibe un array de enteros y su tamaño como argumentos.
int main(): Función principal del programa donde se declara y utiliza el array. 6. Operaciones con arrays:

suma = array[0] + array[1] + ... + array[n-1]: Suma todos los elementos del array.
promedio = suma / n: Calcula el promedio de los elementos del array.
