#include<stdio.h>

void swap(int *a, int *b){ 
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int main(){
	int x=2, y=3;
	swap(&x,&y);
	printf("x: %d, y: %d \n", x, y); //¿Qué imprime?
	return 0;
}
