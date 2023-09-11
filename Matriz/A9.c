#include <stdio.h>

void cargarMatriz(int mat[3][3]) {
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Matriz [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}

void imprimirMatriz(int mat[3][3]) {
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

void sumaD(int mat[3][3]) {
	int i, j, sum = 0;
	int arregloA[5];
	int z=0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == 0 && j == 0 || i == 1 && j == 1 || i == 2 && j == 2 || i == 0 && j == 2 || i == 2 && j == 0) {
				arregloA[z] = mat[i][j];
				sum += mat[i][j];
				z++;
			}
		}
	}
	
	printf("\nLas diagonales son: ");
	for (i = 0; i < 5; i++) {
		printf(" %d", arregloA[i]);
	}
	
	printf("\nLa suma es: %d", sum);
}


int main(int argc, char *argv[]) {
	
	int mat[3][3];
	int i, j;
	cargarMatriz(mat);
	printf("\nLa matriz es: \n");
	imprimirMatriz(mat);
	sumaD(mat);
	
	return 0;
}

