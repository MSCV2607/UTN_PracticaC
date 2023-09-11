#include <stdio.h>

typedef enum { false, true } bool;

void cargarMatriz(int matriz[][3]) {
	printf("Ingrese los elementos de la matriz de 3x3:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
}

void mostrarMatriz(int matriz[][3]) {
	printf("Matriz:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

bool esMatrizSimetrica(int matriz[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < i; j++) {
			if (matriz[i][j] != matriz[j][i]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int matriz[3][3];
	
	cargarMatriz(matriz);
	mostrarMatriz(matriz);
	
	bool simetrica = esMatrizSimetrica(matriz);
	
	if (simetrica) {
		printf("La matriz es simétrica.\n");
	} else {
		printf("La matriz no es simétrica.\n");
	}
	
	return 0;
}
