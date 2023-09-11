#include <stdio.h>
#include <string.h>

#define ALUMNOS 2

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
	printf("\nDNI \t\tApellido \t\tNombre \t\tPromedio \tEdad\n");
	printf("------------------------------------------------------------------------\n");
	for (numA = 0; numA < elementos; numA++)
	{
		printf("%d \t\t%s \t\t\t%s \t\t%d \t\t%d\n", alumno[numA].DNI, alumno[numA].apellido, alumno[numA].nombre, alumno[numA].promedio, alumno[numA].edad);
	}
	printf("------------------------------------------------------------------------\n");
}

/* Cuenta cantidad de alumnos */
int contadorAlumnos(struct estructura_alumnos alumno[], int elementos)
{
	return elementos;
}

float promedio(struct estructura_alumnos alumno[], int elementos) {
	
	int numA, numero = 0;
	float prom;
	
	for (numA = 0; numA < ALUMNOS; numA++)
	{
		numero+=alumno[numA].promedio;
	}
	prom=numero/ALUMNOS;
	printf("\nEl promedio de edad de alumnos es de: %.2f\n",prom);
	
}

/* Búsqueda binaria para encontrar el índice del alumno con la mayor edad */
int buscarAlumnoMayorEdad(struct estructura_alumnos alumno[], int elementos)
{
	int izquierda = 0;
	int derecha = elementos - 1;
	int mayorEdad = 0;
	int indice = -1;
	
	while (izquierda <= derecha)
	{
		int medio = izquierda + (derecha - izquierda) / 2;
		
		if (alumno[medio].edad > mayorEdad)
		{
			mayorEdad = alumno[medio].edad;
			indice = medio;
		}
		
		if (alumno[medio].edad == mayorEdad)
		{
			if (strcmp(alumno[medio].apellido, alumno[indice].apellido) < 0)
			{
				indice = medio;
			}
		}
		
		if (alumno[medio].edad > mayorEdad || (alumno[medio].edad == mayorEdad && strcmp(alumno[medio].apellido, alumno[indice].apellido) < 0))
		{
			izquierda = medio + 1;
		}
		else
		{
			derecha = medio - 1;
		}
	}
	
	return indice;
}

/* Búsqueda binaria para encontrar el índice del alumno con la menor edad */
int buscarAlumnoMenorEdad(struct estructura_alumnos alumno[], int elementos)
{
	int izquierda = 0;
	int derecha = elementos - 1;
	int menorEdad = alumno[0].edad;
	int indice = 0;
	
	while (izquierda <= derecha)
	{
		int medio = izquierda + (derecha - izquierda) / 2;
		
		if (alumno[medio].edad < menorEdad)
		{
			menorEdad = alumno[medio].edad;
			indice = medio;
		}
		
		if (alumno[medio].edad == menorEdad)
		{
			if (strcmp(alumno[medio].apellido, alumno[indice].apellido) < 0)
			{
				indice = medio;
			}
		}
		
		if (alumno[medio].edad < menorEdad || (alumno[medio].edad == menorEdad && strcmp(alumno[medio].apellido, alumno[indice].apellido) < 0))
		{
			derecha = medio - 1;
		}
		else
		{
			izquierda = medio + 1;
		}
	}
	
	return indice;
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
	printf("\nCantidad de alumnos: %d\n", contadorAlumnos(alumno, elementos));
	
	promedio(alumno, elementos);
	
	int indiceMayorEdad = buscarAlumnoMayorEdad(alumno, elementos);
	printf("Alumno con mayor edad: %s\n", alumno[indiceMayorEdad].nombre);
	
	int indiceMenorEdad = buscarAlumnoMenorEdad(alumno, elementos);
	printf("Alumno con menor edad: %s\n", alumno[indiceMenorEdad].nombre);
	
	
	return 0;
}
