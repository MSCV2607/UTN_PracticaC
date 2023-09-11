#include <stdio.h>

int multiplo3(int num) {
	int mul = 0; 
	if(num % 3 == 0) {
		mul = num;
	}
	return mul;
}

int nomultiplo(int num) {
	int mul = 0; 
	if(num % 3 != 0) {
		mul = num;
	}
	return mul;
}


int main(int argc, char *argv[]) {
	int arregloA[10];
	int multiplo[10];
	int numeronm[10];
	int total = 0; 
	
	for (int i = 0; i < 5; i++) {
		printf("\nIngrese el valor %d: ", i+1);
		scanf("%d", &arregloA[i]);
		
		multiplo[i] = multiplo3(arregloA[i]);
		numeronm[i] = nomultiplo(arregloA[i]);
		total += multiplo[i]; 
	}
	
	printf("\nLos múltiplos de 3 son: ");
	for (int i = 0; i < 5; i++) {
		if (multiplo[i] != 0) { 
			printf("%d ", multiplo[i]);
		}
	}
	
	printf("\nLos que no son múltiplos de 3 son: ");
	for (int i = 0; i < 5; i++) {
		if (numeronm[i] != 0) { 
			printf("%d ", numeronm[i]);
		}
	}
	
	printf("\nEl arreglo original es: ");
	for (int i = 0; i < 5; i++) {
		printf("%d", arregloA[i]);
	}

	
	return 0;
}
