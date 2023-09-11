#include <stdio.h>

int maximo(int a) {
	static int max = 0;
	if (a > max) {
		max = a;
	}
	return max;
}

int minimo(int b) {
	static int min = 10;
	if (b < min) {
		min = b;
	}
	return min;
}

float promedio(int c) {
	float prom;
	prom = (float) c / 5;
	return prom;
}


int main(int argc, char *argv[]) {
	
	int notaA[5];
	int total = 0;
	
	for (int i = 0; i < 5; i++) {
		
		do {
			printf("Ingrese el valor de la nota número %d: ", i + 1);
			scanf("%d", &notaA[i]);
			
			if (notaA[i] < 0 || notaA[i] > 10) {
				printf("Nota ingresada incorrecta, vuelva a intentar.\n");
			}
			
		} while (notaA[i] < 0 || notaA[i] > 10);
		
		
		total += notaA[i];
		
		int max = maximo(notaA[i]);
		int min = minimo(notaA[i]);
		
	}
	
	float prom = promedio(total);
	
	for (int i = 0; i < 5; i++) {
		printf("La nota %d es: %d\n", i + 1, notaA[i]);
	}
	
	printf("Nota máxima: %d\n", maximo(0));
	printf("Nota mínima: %d\n", minimo(10));
	printf("Promedio: %.2f\n", prom);
	
	return 0;
}
