#include <stdio.h>

void cargarMatriz(int mat[3][3]) {
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Matriz [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}

void imprimirMatriz(int mat[3][3]) {
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

void sumaM(int matA[3][3], int matB[3][3]) {
	int matS[3][3];
	int i,j,sum;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum=matA[i][j]+matB[i][j];
			matS[i][j]=sum;
		}
	}
	printf("\nLa Suma es: \n");
	imprimirMatriz(matS);
}

void restaM(int matA[3][3], int matB[3][3]) {
	int matR[3][3];
	int i,j,res;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			res=matA[i][j]-matB[i][j];
			matR[i][j]=res;
		}
	}
	printf("\nLa Resta es: \n");
	imprimirMatriz(matR);
}

void multiM(int matA[3][3], int matB[3][3]) {
	int multiM[3][3];
	int i,j,mul;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mul=matA[i][j]*matB[i][j];
			multiM[i][j]=mul;
		}
	}
	printf("\nLa multiplicacion es: \n");
	imprimirMatriz(multiM);
}

int main(int argc, char *argv[]) {
	int matA[3][3];
	int matB[3][3];
	int i, j;
	cargarMatriz(matA);
	printf("\n");
	cargarMatriz(matB);
	printf("\nLa matriz A es: \n");
	imprimirMatriz(matA);
	printf("\nLa matriz B es: \n");
	imprimirMatriz(matB);
	
	sumaM(matA,matB);
	restaM(matA,matB);
	multiM(matA,matB);
	
	return 0;
}
