#include <stdio.h>
#define ALUMNOS 1

/* Alumnos */
struct estructura_alumnos
{
	char nombre[30];
	char apellido[40];
	int DNI;
	int edad;
	int promedio;
};

/* Imprime */
void imprimirDatosAlumnos(struct estructura_alumnos alumno[], int elementos)
{
	int numA;
	printf("\nDNI \t\tApellido \t\tNombre \t\tPromedio\n");
	printf("------------------------------------------------------------------------\n");
	for (numA = 0; numA < elementos; numA++)
	{
		printf("%d \t\t%s \t\t\t%s \t\t%d\n", alumno[numA].DNI, alumno[numA].apellido, alumno[numA].nombre, alumno[numA].promedio);
	}
	printf("------------------------------------------------------------------------\n");
}

/* Cuenta cantidad de alumnos */
int contadorAlumnos(struct estructura_alumnos alumno[], int elementos)
{
	int numA, numero = 0;
	
	for (numA = 0; numA < elementos; numA++)
	{
		numero++;
	}
	
	printf("\nHay %d alumnos", numA);
	return numA;
}

int main(int argc, char *argv[])
{
	int numA, elementos;
	
	elementos = ALUMNOS;
	struct estructura_alumnos alumno[elementos];
	for (numA = 0; numA < elementos; numA++)
	{
		printf("\nDatos del alumno número %d:\n", numA + 1);
		printf("Escribe el nombre del alumno: ");
		scanf(" %[^\n]", alumno[numA].nombre);
		
		printf("Escribe el apellido del alumno: ");
		scanf(" %[^\n]", alumno[numA].apellido);
		
		printf("Escribe el promedio del alumno: ");
		scanf("%d", &alumno[numA].promedio);
		
		printf("Escribe la edad del alumno: ");
		scanf("%d", &alumno[numA].edad);
		
		printf("Escribe el DNI del alumno: ");
		scanf("%d", &alumno[numA].DNI);
		
		while (getchar() != '\n')
			; // Limpiar el búfer de entrada después de cada lectura de scanf
	}
	
	imprimirDatosAlumnos(alumno, elementos);
	contadorAlumnos(alumno, elementos);
	
	return 0;
}

