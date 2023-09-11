#include <stdio.h>
#include <string.h>

int main() {
	char cadena[20];
	char nombreA[10], nombreB[10];
	int longitud;
	
	//Pedimos que ingrese dos nombres separados con un punto y lo escaneamos
	printf("Ingresa los nombres separados por un punto: ");
	scanf("%[^.].%s", nombreA, nombreB);
	
	// Sacamos longitud de nombres
	longitud = strlen(nombreA) + strlen(nombreB) + 1;
	
	// Cada nombre lo copiamos en una cadena
	sprintf(cadena, "%s.%s", nombreA, nombreB);
	
	// El resto de esapcios completamos con a
	int i;
	for (i = longitud; i < 20; i++) {
		cadena[i] = 'a';
	}
	cadena[20] = '\0';
	
	//Imprimimos todo lo pedido
	printf("Primer Nombre: %s\n", nombreA);
	printf("Segundo Nombre: %s\n", nombreB);
	printf("Cadena completada: %s\n", cadena);
	
	return 0;
}
