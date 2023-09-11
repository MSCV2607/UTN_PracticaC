#include <stdio.h>
#include <string.h>
//Funcion que nos ayudara a contar cuantas letras hay en la palabra
char contarLetra(const char* cadena, char letra) {
	int contador = 0;
	int i = 0;
	
	while (cadena[i] != '\0') {
		if (cadena[i] == letra) {
			contador++;
		}
		i++;
	}
	
	return contador;
}

int main() {
	char cadena[20];
	char letra;
	//Ingresamos una palabra y la escaneamos
	printf("Ingrese una palabra: ");
	scanf("%s", cadena);
	//Ingresamos una  letra y la escaneamos
	printf("Ingrese una letra: ");
	scanf(" %c", &letra);
	
	//Llamamos a la funcion
	int cantidad = contarLetra(cadena, letra);
	printf("La letra '%c' aparece %d veces en la cadena '%s'\n", letra, cantidad, cadena);
	
	return 0;
}
