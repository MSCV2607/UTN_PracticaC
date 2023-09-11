#include <stdio.h>

#define TAMANO_ARREGLO 10

int busquedaBinaria(int arreglo[], int elemento) {
	int izquierda = 0;
	int derecha = TAMANO_ARREGLO - 1;
	
	while (izquierda <= derecha) {
		int medio = (izquierda + derecha) / 2;
		
		if (arreglo[medio] == elemento) {
			return medio;
		} else if (arreglo[medio] < elemento) {
			izquierda = medio + 1;
		} else {
			derecha = medio - 1;
		}
	}
	
	return -1;
}

void eliminarElemento(int arreglo[], int elemento, int posicion) {
	int ultimaPosicion = -1;
	int contador = 0;
	
	for (int i = 0; i < TAMANO_ARREGLO; i++) {
		if (arreglo[i] == elemento) {
			ultimaPosicion = i;
			contador++;
		}
	}
	
	if (contador == 1) {
		arreglo[posicion] = 0;
	} else if (ultimaPosicion != -1) {
		arreglo[ultimaPosicion] = 0;
	}
}

void mostrarArreglo(int arreglo[]) {
	printf("Arreglo: ");
	for (int i = 0; i < TAMANO_ARREGLO; i++) {
		printf("%d ", arreglo[i]);
	}
	printf("\n");
}

int main() {
	int arreglo[TAMANO_ARREGLO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int elemento;
	
	printf("Ingrese un elemento: ");
	scanf("%d", &elemento);
	
	int posicion = busquedaBinaria(arreglo, elemento);
	
	if (posicion != -1) {
		int contador = 0;
		for (int i = posicion; i < TAMANO_ARREGLO; i++) {
			if (arreglo[i] == elemento) {
				contador++;
			}
		}
		
		printf("El elemento se encuentra en el arreglo.\n");
		printf("Aparece %d veces.\n", contador);
		printf("Ultima posicion: %d\n", posicion);
		
		eliminarElemento(arreglo, elemento, posicion);
		printf("Arreglo luego de la eliminacion:\n");
		mostrarArreglo(arreglo);
	} else {
		printf("El elemento no se encuentra en el arreglo.\n");
	}
	
	return 0;
}
