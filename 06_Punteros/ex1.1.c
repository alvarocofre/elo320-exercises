#include <math.h>
#include <stdio.h>

void llenarArreglo(int arr[], int tam) {
    printf("ingrese %d valores para el arreglo: \n", tam);
    for (int i = 0; i < tam; i++) {
        printf("Valor [%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void imprimirDatosArreglo(int arr[], int tam) {
    printf("Arreglo => [ ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void imprimirDatosArregloRef(int *arr, int tam) {
    printf("Arreglo => [ ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", *(arr + i));
    }
    printf("]\n");
}

int main() {
    // int arreglo[];
    int size = 4;
    int arreglo[] = {9, 3, 0, 8};
    imprimirDatosArregloRef(arreglo, size);

    return 0;
}
