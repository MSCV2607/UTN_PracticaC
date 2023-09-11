#include <stdio.h>
#include <string.h>

struct estructura_amigo {
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
};

void imprimirDatosAmigos(struct estructura_amigo amigo[], int elementos) {
	int numA;
	printf("------------------------------------------------------------------------");
	printf("\nNumA \t\tNombre \t\tApellido \tEdad \t\tTelefono\n");
	for (numA = 0; numA < elementos; numA++) {
		printf("%d \t\t%s \t\t%s \t\t%d \t\t%s\n", numA + 1, amigo[numA].nombre, amigo[numA].apellido, amigo[numA].edad, amigo[numA].telefono);
	}
	printf("------------------------------------------------------------------------\n");
}

int contadorAgenda(struct estructura_amigo amigo[], int elementos) {
	int numA, numero = 0;
	
	for (numA = 0; numA < elementos; numA++){
		numero++;
	}
	
	printf("\nHay %d contactos en la agenda", numA);
	return numA;
}

int buscarContacto(struct estructura_amigo amigo[], int elementos, const char *nombre) {
	int izquierda = 0;
	int derecha = elementos - 1;
	
	while (izquierda <= derecha) {
		int medio = (izquierda + derecha) / 2;
		int resultado = strcmp(amigo[medio].nombre, nombre);
		
		if (resultado == 0) {
			return medio; // Se encontró el contacto
		} else if (resultado < 0) {
			izquierda = medio + 1; // El contacto está en la mitad derecha
		} else {
			derecha = medio - 1; // El contacto está en la mitad izquierda
		}
	}
	
	return -1; // El contacto no fue encontrado
}

int main() {
	int numA, elementos;
	
	printf("Ingrese la cantidad de contactos: ");
	scanf("%d", &elementos);
	
	struct estructura_amigo amigo[elementos];
	
	for (numA = 0; numA < elementos; numA++) {
		printf("\nDatos del amigo número %d:\n", numA + 1);
		printf("Escribe el nombre del amigo: ");
		scanf(" %[^\n]", amigo[numA].nombre);
		
		printf("Escribe el apellido del amigo: ");
		scanf(" %[^\n]", amigo[numA].apellido);
		
		printf("Escribe el número de teléfono del amigo: ");
		scanf(" %[^\n]", amigo[numA].telefono);
		
		printf("Escribe la edad del amigo: ");
		scanf("%d", &amigo[numA].edad);
		
		while (getchar() != '\n');  // Limpiar el búfer de entrada después de cada lectura de scanf
	}
	
	imprimirDatosAmigos(amigo, elementos);
	printf("\n");
	
	// Búsqueda de contacto
	char nombreBuscado[30];
	printf("Ingrese el nombre del contacto a buscar: ");
	scanf(" %[^\n]", nombreBuscado);
	
	int indice = buscarContacto(amigo, elementos, nombreBuscado);
	
	if (indice != -1) {
		printf("El contacto se encontró en la posición %d\n", indice + 1);
		printf("Nombre: %s\n", amigo[indice].nombre);
		printf("Apellido: %s\n", amigo[indice].apellido);
		printf("Teléfono: %s\n", amigo[indice].telefono);
		printf("Edad: %d\n", amigo[indice].edad);
	} else {
		printf("El contacto no fue encontrado\n");
	}
	
	contadorAgenda(amigo, elementos);
	
	return 0;
}
