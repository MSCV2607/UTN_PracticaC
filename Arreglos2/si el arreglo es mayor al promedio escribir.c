#include <stdio.h>
//Metodo de la burbuja para ordenar el arreglo
void bubbleSort(int arreglo[], int tam) {
	int i, j;
	for (i = 0; i < tam-1; i++) {
		// Últimos i elementos ya están ordenados
		for (j = 0; j < tam-i-1; j++) {
			// Comparar elementos adyacentes
			if (arreglo[j] > arreglo[j+1]) {
				// Intercambiar elementos si el primero es mayor que el segundo
				int temp = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = temp;
			}
		}
	}
}

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
	
	for (int i = 0; i < 9; i++) {
		printf("%d--", arreglo[i]);
	}
	
	printf("%d", arreglo[tam-1]);
	
	int suma_total = suma(arreglo, tam);
	printf("\nLa suma es: %d", suma_total);
	
	float prom = (float)suma(arreglo, tam)/10;
	printf("\nSu promedio es: %.2f\n", prom);
	
	for (int i = 0; i < tam; i++) {
		if(arreglo[i]>prom) {
			printf("%d--", arreglo[i]);
		}
	}
	
	return 0;
}

