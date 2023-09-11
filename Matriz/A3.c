#include <stdio.h>

// Función de suma del total
int sumarMatriz(int matriz[5][2]) {
	int i, j, suma = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++) {
			suma = suma + matriz[i][j];
		}
	}
	printf("La suma total es: %d\n", suma);
}

int main(int argc, char *argv[]) {
	int i, j, suma = 0;
	int matriz[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++) {
			printf("Matriz[%d][%d] = %d\t", i, j, matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	sumarMatriz(matriz);
	return 0;
}


