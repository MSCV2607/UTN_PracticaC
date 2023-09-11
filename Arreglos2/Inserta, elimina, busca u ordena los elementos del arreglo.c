#include <stdio.h>

#define TAMANO_ARREGLO 5

void insertarElemento(int arreglo[], int elemento, int posicion) {
	for (int i = TAMANO_ARREGLO - 1; i > posicion; i--) {
		arreglo[i] = arreglo[i - 1];
	}
	arreglo[posicion] = elemento;
}

void eliminarElemento(int arreglo[], int posicion) {
	for (int i = posicion; i < TAMANO_ARREGLO - 1; i++) {
		arreglo[i] = arreglo[i + 1];
	}
	arreglo[TAMANO_ARREGLO - 1] = 0;
}

int buscarElemento(int arreglo[], int elemento) {
	for (int i = 0; i < TAMANO_ARREGLO; i++) {
		if (arreglo[i] == elemento) {
			return i;
		}
	}
	return -1;
}

void ordenarArreglo(int arreglo[]) {
	for (int i = 0; i < TAMANO_ARREGLO - 1; i++) {
		for (int j = 0; j < TAMANO_ARREGLO - i - 1; j++) {
			if (arreglo[j] > arreglo[j + 1]) {
				int temp = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = temp;
			}
		}
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
	int arreglo[TAMANO_ARREGLO];
	
	printf("Ingrese los elementos del arreglo:\n");
	for (int i = 0; i < TAMANO_ARREGLO; i++) {
		scanf(" %d", &arreglo[i]);
	}
	
	int opcion;
	
	printf("Seleccione la operacion a realizar:\n");
	printf("1. Insertar elemento\n");
	printf("2. Eliminar elemento\n");
	printf("3. Buscar elemento\n");
	printf("4. Ordenar arreglo\n");
	
	scanf(" %d", &opcion);
	
	switch (opcion) {
	case 1: {
		int elemento, posicion;
		printf("Ingrese el elemento a insertar: ");
		scanf(" %d", &elemento);
		printf("Ingrese la posicion de insercion: ");
		scanf(" %d", &posicion);
		
		insertarElemento(arreglo, elemento, posicion);
		mostrarArreglo(arreglo);
		break;
	}
	case 2: {
		int posicion;
		printf("Ingrese la posicion del elemento a eliminar: ");
		scanf(" %d", &posicion);
		
		eliminarElemento(arreglo, posicion);
		mostrarArreglo(arreglo);
		break;
	}
	case 3: {
		int elemento;
		printf("Ingrese el elemento a buscar: ");
		scanf(" %d", &elemento);
		
		int posicion = buscarElemento(arreglo, elemento);
		if (posicion != -1) {
			printf("El elemento se encuentra en la posicion %d\n", posicion);
		} else {
			printf("El elemento no se encuentra en el arreglo\n");
		}
		break;
	}
	case 4: {
		ordenarArreglo(arreglo);
		mostrarArreglo(arreglo);
		break;
	}
	default:
		printf("Opcion invalida\n");
		break;
	}
	
	return 0;
}
