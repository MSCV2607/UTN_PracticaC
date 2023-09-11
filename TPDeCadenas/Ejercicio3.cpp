#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char cadena1[20];
	char cadena2[20];
	char cadena3[20];
	
	int L1,L2,L3;
	
	printf("Ingrese la primera cadena: ");
	scanf("%s",&cadena1);
	printf("\nIngrese la segunda cadena: ");
	scanf("%s",&cadena2);
	printf("\nIngrese la tercera cadena: ");
	scanf("%s",&cadena3);
	
	L1 = strlen(cadena1);
	L2 = strlen(cadena2);
	L3 = strlen(cadena3);
	
	
	printf("\n-----------------------------------------------------------------------");
	printf("\nLa primera cadena posee una longitud de %d espacios",L1);
	printf("\nLa segunda cadena posee una longitud de %d espacios",L2);
	printf("\nLa tercer cadena posee una longitud de %d espacios",L3);
	
	
	int comparacion1_2 = strcmp(cadena1, cadena2);
	int comparacion1_3 = strcmp(cadena1, cadena3);
	int comparacion2_3 = strcmp(cadena2, cadena3);
	
	
	printf("\n-----------------------------------------------------------------------");
	printf("\nLas cadenas de menor a mayor son: ");
	
	if (comparacion1_2 <= 0 && comparacion1_3 <= 0) {
		printf("\n%s", cadena1);
		
		if (comparacion2_3 <= 0) {
			printf("\n%s", cadena2);
			printf("\n%s", cadena3);
		} else {
			printf("\n%s", cadena3);
			printf("\n%s", cadena2);
		}
	} else if (comparacion2_3 <= 0 && comparacion1_3 <= 0) {
		printf("\n%s", cadena2);
		
		if (comparacion1_2 <= 0) {
			printf("\n%s", cadena1);
			printf("\n%s", cadena3);
		} else {
			printf("\n%s", cadena3);
			printf("\n%s", cadena1);
		}
	} else {
		printf("\n%s", cadena3);
		
		if (comparacion1_2 <= 0) {
			printf("\n%s", cadena1);
			printf("\n%s", cadena2);
		} else {
			printf("\n%s", cadena2);
			printf("\n%s", cadena1);
		}
	}
	
	
	
	
	
	return 0;
}

