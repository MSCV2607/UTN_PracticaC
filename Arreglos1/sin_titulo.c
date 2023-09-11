#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	int lista[9] = {0,4,5,9,50,4,81,4};
	int i,b,enc;
	
	printf("Ingreso nro. a buscar \n");
	scanf("%d",&b);
	i=0;
	enc=0;
	
	while(i<9) {
		if(b==lista[i]) enc++;
		i++;
	}
	if(enc!=0) printf("Numero encontrado %d veces\n", enc);
	else printf("Numero no encontrado\n");
	
	getch();
	
	return 0;
}

