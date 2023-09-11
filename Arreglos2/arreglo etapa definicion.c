#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int arreglo[10] = {1,2,3,4,5,6,7,8,9,10};
	
	for (int i=0;arreglo[i]<10;i++) {
		printf("%d--",arreglo[i]);
	}
	printf("%d",arreglo[9]);
	
	return 0;
}

