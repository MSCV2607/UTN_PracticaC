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

int sumaMatriz(int mat[4][4]) {
	int i, j, suma = 0;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			suma += mat[i][j];
		}
	}
	
	return suma;
}
/* ARREGLAR PARA SABER SI ES IVISIBLE POR 4
int divisible(int mat[4][4]) {
	int i, j, div = 0;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if
		}
	}
	
	return suma;
}
*/

int main() {
	int mat[4][4];
	
	cargarMatriz(mat);
	
	int suma = sumaMatriz(mat);
	
	printf("La suma de los elementos de la matriz es: %d\n", suma);
	
	return 0;
}
