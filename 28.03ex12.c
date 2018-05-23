/* Desenvolver um algoritmo para ler um número “x” e calcular e
imprimir o valor de “y” de acordo com as condições abaixo:
y = x , se x < 1;
y = 0 , se x = 1;
y = x² , se x > 1;

*/

#include <stdio.h>
#include <math.h>


main(){
	
	int x, y;
	printf("\nDigite o valor de 'x': \n");
	scanf("%d", &x);
	
	
	if(x < 1){
		y = x;
		printf("\n Y = %d \n", y);
	}
	
	else if(x == 1){
		y = 0;
		printf("\nY = %d \n", y);
		
	}
	
	else if(x > 1){
		y = (pow(x,2));
		printf("\n Y = %d \n", y);
	}
}
