#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char C1[20];
	char C2[20];
	int longitudC1,longitudC2,comparacion;
	
	//Pedimos aul usuario que ingrese os cadenas y la escaneamos
	printf("Ingresar la primera cadena: ");
	scanf("%s",&C1);
	printf("\nIngresar la segunda cadena: ");
	scanf("%s",&C2);
	
	//Mostramos las cadenas
	printf("\nPrimera cadena: %s",C1);
	printf("\nSegunda cadena: %s",C2);
	
	//Medimos la longitud de las cadenas
	longitudC1 = strlen(C1);
	longitudC2 = strlen(C2);
	
	//Indicamos, si hay, la cadena mas larga y a la cadena mas corta concatenamos la mas larga
	if(longitudC1>longitudC2) {
		
		printf("\nLa cadena mas larga es la primera");
		strcat(C2,C1);
		printf("\nLa cadena concatenada queda: %s",C2);
		
	} else if (longitudC2>longitudC1) {
		printf("\nLa cadena mas larga es la segunda");
		
		strcat(C1,C2);
		printf("\nLa cadena concatenada queda: %s",C1);
		
	} else {
		printf("\nLas dos cadenas poseen la misma longitud");
		strcat(C1,C2);
		printf("\nLa cadena concatenada queda:%s",C1);
	}
	
	printf("\n");
	
	//Volvemos a comparar las cadenas pero esta vez usando la funcion de la libreria y decimos cual es la menor
	comparacion = strcmp(C1, C2);
	if (comparacion < 0) {
		printf("\nLa primera cadena es menor.");
	} else if (comparacion > 0) {
		printf("\nLa segunda cadena es menor.");
	} else {
		printf("\nLas cadenas son iguales.");
	}
	

	
	
	return 0;
}

