#include <stdio.h>
#include <math.h>

void llenarArreglo(int arr[], int tam){
    printf("ingrese %d valores para el arreglo: \n", tam);
    for (int i =0; i < tam; i++){
        printf("Valor [%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void imprimirDatosArreglo(int arr[], int tam){
    printf("Arreglo => [ ");
    for(int i=0; i < tam; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

float promedio(int arr[], int tam){
    float suma=0;
    for(int i=0; i < tam; i++){
        suma+=arr[i];
    }
    return suma/tam;
}

float desviacion(int arr[], int tam){
    float media = promedio(arr, tam);
    float sum =0;
    for (int i =0; i < tam; i++){
        sum+= pow(arr[i]-media, 2);
    }
    return sqrt(sum/(tam-1));
}

float varianza(int arr[], int tam){
    return pow(desviacion(arr, tam), 2);
}

void sort(int arr[], int tam){
    int i, j, temp;
    for(i = 0; i < tam - 1; i++){
        for(j = 0; j < tam - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                // Intercambio de elementos si están en el orden incorrecto
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("El arreglo ordenado es: [ ");
    for (int i = 0; i < tam; i++){
        printf(" %d ", arr[i]);
    }
    printf(" ] \n");
}

int menor(int arr[], int tam){
    int menor = 0;
    for (int i = 0; i < tam; i++)
        if (arr[i]<menor)
            menor = arr[i];
    
    return menor;
}

int mayor(int arr[], int tam){
    int mayor = 0;
    for (int i = 0; i < tam; i++)
        if (arr[i]>menor)
            mayor = arr[i];
    return mayor;
}



int main() {
    //int arreglo[]; 
    int size;
    printf("Ingrese el tamaño del arreglo: \n");
    scanf("%d", &size);

    int arreglo[size];

    llenarArreglo(arreglo, size);
    imprimirDatosArreglo(arreglo, size);

    printf("El promedio del arreglo es %.2f \n", promedio(arreglo, size));
    printf("La desviación estandar muestral es de %.5f \n", desviacion(arreglo, size));
    printf("La varianza es de %.5f \n", desviacion(arreglo, size));
    sort(arreglo, size);
    printf("El numero menor es: %d \n", menor(arreglo, size));
    printf("El numero mayor es: %d \n", mayor(arreglo, size));


    return 0;
}
