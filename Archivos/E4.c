#include <stdio.h>
#define ALUMNOS 3

/*Alumnos*/
struct estructura_alumnos
{
	char nombre[30];
	char apellido[40];
	int DNI; 
	int edad;
	int promedio;
};

/*Imprime*/
void imprimirDatosAmigos(struct estructura_alumnos alumno[], int elementos) {
	int numA;
	printf("\nDNI \t\tApellido \t\tNombre \tEdad\n");
	printf("------------------------------------------------------------------------");
	for (numA = 0; numA < ALUMNOS; numA++) {
		printf("%d \t\t%s \t\t%s \t\t%d \t\t%s\n", numA + 1, amigo[numA].nombre, amigo[numA].apellido, amigo[numA].edad, amigo[numA].telefono);
	}
	printf("------------------------------------------------------------------------\n");
}

/*Cuenta cantidad de alumnos*/
int contadorAgenda(struct estructura_amigo amigo[], int elementos) {
	int numA, numero = 0;
	
	for (numA = 0; numA < elementos; numA++){
		numero++;
	}
	
	printf("\nHay %d alumnos", numA);
	return numA;
}



int main(int argc, char *argv[]) {
	
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
	

	
	
	
	contadorAgenda(amigo, elementos);
	
	return 0;
}

