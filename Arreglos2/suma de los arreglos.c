#include <stdio.h>

int suma(int arreglo[], int tam) {
	int acum = 0;
	
	for (int i = 0; i < tam; i++) {
		acum += arreglo[i];
	}
	
	return acum;
}

int main(int argc, char *argv[]) {
	
	int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int tam = 10;
	
	for (int i = 0; i < tam; i++) {
		printf("%d--", arreglo[i]);
	}
	
	printf("\n%d", arreglo[tam-1]);
	
	int suma_total = suma(arreglo, tam);
	printf("\nLa suma es: %d", suma_total);
	
	float prom = (float)suma(arreglo, tam)/10;
	printf("\nSu promedio es: %.2f", prom);
	
	return 0;
}


