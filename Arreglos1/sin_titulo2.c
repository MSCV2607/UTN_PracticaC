
#include<stdio.h>

#include<conio.h>



int main(){
	
	int i,buscar,mitad;  int a = 0;
	
	int b = 10;
	
	int contadorA = 0;
	
	int contadorB = 0;
	
	int lista[10]= {1, 4, 7, 15, 32,33,57,58,70,80};
	
	
	
	printf("====================================================\n\n");
	
	//se muestra el arreglo en pantalla 
	
	for(i = 0; i < 10; i++){
		
		printf("%d ", lista[i]);
		
	}
	
	printf("\n\n====================================================\n");
	
	printf("Ingresa un numero a buscar: "); 
	
	scanf("%d", &buscar);
	
	
	
	while (a <= b){
		
		contadorA++;  mitad = (a + b) / 2;
		
		
		
		if(buscar == lista[mitad]){
			
			printf("Numero %d encontrado en posicion %d\n", lista[mitad], mitad);  break;
			
		}
		
		else if(buscar < lista[mitad]){
			
			b = mitad -1;
			
		}
		
		else{
			
			a = mitad + 1;
			
		}
		
		contadorB++;
		
	}//fin while
	
	
	
	if(contadorA == contadorB){  printf("Numero no encontrado\n");
	
	}
	
	return 0;
	
}
