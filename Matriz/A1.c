#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i,j;
	int matriz[5][2] ={(0,0),(1,2),(2,4),(3,6),(4,8)};
	
	for (i=0;i<5;i++) {
		for(j=0;j<2;j++) {
			printf("Matriz[%d][%d] = ",i,j);
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<5;i++) {
		for(j=0;j<2;j++) {

			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}

