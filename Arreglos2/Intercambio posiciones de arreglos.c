#include <stdio.h>

int main() {
	int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int pos1, pos2;
	
	printf("Arreglo original: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arreglo[i]);
	}
	
	printf("\nIngrese la primera posición (0-9): ");
	scanf("%d", &pos1);
	
	printf("Ingrese la segunda posición (0-9): ");
	scanf("%d", &pos2);
	
	if (pos1 >= 0 && pos1 < 10 && pos2 >= 0 && pos2 < 10 && pos1 != pos2) {
		// Intercambiar los contenidos de las posiciones
		int temp = arreglo[pos1];
		arreglo[pos1] = arreglo[pos2];
		arreglo[pos2] = temp;
		
		printf("\nArreglo después del intercambio: ");
		for (int i = 0; i < 10; i++) {
			printf("%d ", arreglo[i]);
		}
	} else {
		printf("\nLas posiciones ingresadas no son válidas o son iguales.");
	}
	
	return 0;
}
