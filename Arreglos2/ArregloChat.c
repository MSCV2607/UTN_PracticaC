#include <stdio.h>

int es_par(int numero) {
	if (numero % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}

void ordenar_arreglo(int arreglo[], int longitud) {
	int i, j, temp;
	for (i = 0; i < longitud - 1; i++) {
		for (j = 0; j < longitud - i - 1; j++) {
			if (arreglo[j] > arreglo[j + 1]) {
				temp = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = temp;
			}
		}
	}
}

void cargar_matriz(int arreglo[], int longitud, int matriz[2][2]) {
	int contador_pares = 0;
	int indice_arreglo = 0;
	int i, j;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (indice_arreglo < longitud) {
				while (!es_par(arreglo[indice_arreglo])) {
					indice_arreglo++;
					if (indice_arreglo >= longitud) {
						break;
					}
				}
				
				if (indice_arreglo < longitud) {
					matriz[i][j] = arreglo[indice_arreglo];
					contador_pares++;
					indice_arreglo++;
				} else {
					break;
				}
			} else {
				break;
			}
		}
	}
	
	if (contador_pares == 0) {
		printf("El arreglo no contiene elementos pares. No se puede cargar la matriz.\n");
	}
}

int main() {
	int arreglo[10];
	int contador_elementos = 0;
	int i;
	
	while (contador_elementos < 10) {
		int numero;
		printf("Ingrese un número entero mayor que 0: ");
		scanf("%d", &numero);
		
		if (numero > 0) {
			int repetido = 0;
			for (i = 0; i < contador_elementos; i++) {
				if (arreglo[i] == numero) {
					repetido = 1;
					break;
				}
			}
			
			if (!repetido) {
				arreglo[contador_elementos] = numero;
				contador_elementos++;
			}
		}
	}
	
	printf("Arreglo original:\n");
	for (i = 0; i < contador_elementos; i++) {
		printf("%d\n", arreglo[i]);
	}
	
	ordenar_arreglo(arreglo, contador_elementos);
	
	printf("Arreglo ordenado:\n");
	for (i = 0; i < contador_elementos; i++) {
		printf("%d\n", arreglo[i]);
	}
	
	int matriz[2][2] = {{0, 0}, {0, 0}};
	cargar_matriz(arreglo, contador_elementos, matriz);
	
	if (matriz[0][0] != 0 || matriz[0][1] != 0 || matriz[1][0] != 0 || matriz[1][1] != 0) {
		printf("Matriz:\n");
		for (i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
