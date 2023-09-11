#include <stdio.h>
//Pasar a procedimientos para cargar la matriz, para hacerlo divisible por 4
int main(int argc, char *argv[]) {
	
	int mat[4][4];
	int i=0,j=0,cont=0,par=0;
	
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			printf("MATRIZ POSICION [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
			cont=cont+mat[i][j]
		}
	}
	
	
	return 0;
}

