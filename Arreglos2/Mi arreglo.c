#include <stdio.h>

void ordenarArreglo(int arreglo[], int tam) {
	int i, j, temp;
	
	for (i = 0; i < tam - 1; i++) {
		for (j = 0; j < tam - i - 1; j++) {
			if (arreglo[j] > arreglo[j + 1]) {
				temp = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = temp;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	
	int arreglo[10];
	int i = 0;
	int a;
	
	while (i < 10) {
		printf("Ingrese el n�mero de la posici�n %d del arreglo: ", i);
		scanf("%d", &a);
		
		// Verificar si el n�mero ya existe en el arreglo
		int repetido = 0;
		for (int j = 0; j < i; j++) {
			if (arreglo[j] == a) {
				repetido = 1;
				printf("El n�mero ingresado ya existe en el arreglo. Introduzca otro n�mero.\n");
				break;
			}
		}
		
		if (!repetido) {
			if (a < 0) {
				printf("El n�mero ingresado es menor a 0. Introduzca un n�mero v�lido.\n");
			} else {
				arreglo[i] = a;
				i++;
			}
		}
	}
	
	printf("\nArreglo original:\n");
	for (i = 0; i < 10; i++) {
		printf("\n%d ", arreglo[i]);
	}
	
	ordenarArreglo(arreglo, 10);
	
	printf("\nArreglo ordenado de menor a mayor:\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", arreglo[i]);
	}
	
	return 0;
}
