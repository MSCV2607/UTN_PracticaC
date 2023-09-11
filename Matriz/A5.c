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
	
	return suma;
}

int buscarMatriz(int matriz[5][2], int target) {
	int cant = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			if (matriz[i][j] == target) {
				cant++;
			}
		}
	}
	
	printf("Se encontró el número %d %d veces.\n", target, cant);
	
	return cant;
}

int main(int argc, char *argv[]) {
	int matriz[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			printf("Matriz[%d][%d] = %d\t", i, j, matriz[i][j]);
		}
		printf("\n");
	}
	
	int sumaTotal = sumarMatriz(matriz);
	printf("El promedio es: %d\n", sumaTotal / 10);
	
	int num;
	printf("\nQue numero quiere buscar: ");
	scanf("%d", &num);
	
	int numeroBuscado = num;
	int cantidad = buscarMatriz(matriz, numeroBuscado);
	
	return 0;
}

