#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int vector1[5] = {1,2,3,4,5};
	int vector2[5];
	
	for (int i = 4, z = 0; i >= 0; i--, z++) {
		vector2[z] = vector1[i];
	}
	
	for (int i = 0; i < 5; i++) {
		printf("%d ", vector1[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", vector2[i]);
	}
	
	return 0;
}
