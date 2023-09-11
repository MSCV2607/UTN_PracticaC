#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int vector1[5];
	int vector2[5];
	int vector3[5];
	
	for (int i=0;i<5;i++) {
		printf("\nIngrese el valor del primer vector");
		printf("\nIngrese el valor %d: ", i+1);
		scanf("%d", &vector1[i]);
	}
	
	for (int i=0;i<5;i++) {
		printf("\nIngrese el valor del segundo vector");
		printf("\nIngrese el valor %d: ", i+1);
		scanf("%d", &vector2[i]);
	}
	
	for (int i=0;i<5;i++) {
		
		vector3[i] = vector1[i]+vector2[i];
		printf("\nEl valor %d del vector es %d",i+1,vector3[i]);
		
	}
	
	
	
	
	return 0;
}

