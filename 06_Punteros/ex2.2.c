#include <stdio.h>

float promedio(int *arr, int tam);
void sumar7(int *var);
void promedio(int *arr, int tam, float * prom);

int main() {
    int size = 4;
    int arreglo[] = {2, 5, 17, 19};

    printf("El promedio del arreglo es %.2f\n", promedio(arreglo, size));

    // sumar7(&size);
    // printf("El nuevo valor de size es: %d \n", size);

    return 0;
}
//
//
//
//
//
//
//
//
//
//
//
//
//
//

float promedio(int *arr, int tam) {
    float sum;
    for (int i = 0; i < tam; i++) {
        sum += arr[i];
    }
    return sum / tam;
}

void sumar7(int *var){ 
    *var += 7; 
}

// paso por referencia se refiere a pasar la dirección de memoria de una variable
// como argumento a una función en lugar de pasar una copia del 
// valor de la variable.

void promedio(int *arr, int tam, float *prom){
    float sum;
    for (int i = 0; i < tam; i++) {
        sum += arr[i];
    }
    *prom = sum / tam;
}
