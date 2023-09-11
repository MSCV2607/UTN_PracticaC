#include <stdio.h>

void cargarMatriz(int mat[4][4]) {
	int i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("Matriz [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}

void imprimirMatriz(int mat[4][4]) {
	int i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

void ordenarArreglo(int arr[], int n) {
	int i, j, temp;
	
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-i-1; j++) {
			if (arr[j] < arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void imprimirArreglo(int arr[], int n) {
	int i;
	
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	printf("\n");
}

int main() {
	int mat[4][4];
	int pares[16];
	int numPares = 0;
	int i, j;
	
	cargarMatriz(mat);
	printf("\nLa matriz es: \nzs");
	imprimirMatriz(mat);
	
	// Guardar elementos pares en el arreglo sin repetir
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (mat[i][j] % 2 == 0) {
				int k;
				int repetido = 0;
				
				// Verificar si el número ya existe en el arreglo
				for (k = 0; k < numPares; k++) {
					if (pares[k] == mat[i][j]) {
						repetido = 1;
						break;
					}
				}
				
				// Si no está repetido, guardarlo en el arreglo
				if (!repetido) {
					pares[numPares] = mat[i][j];
					numPares++;
				}
			}
		}
	}
	
	// Ordenar el arreglo de mayor a menor
	ordenarArreglo(pares, numPares);
	
	// Mostrar el arreglo resultante
	printf("Arreglo de elementos pares ordenados de mayor a menor:\n");
	imprimirArreglo(pares, numPares);
	
	return 0;
}
