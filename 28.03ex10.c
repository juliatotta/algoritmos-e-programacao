/* Dados quatro números distintos, desenvolver um algoritmo que
determine e imprima a soma dos três menores. */


#include <stdio.h>
#include <string.h>


main(){
	
	int numero1, numero2, numero3, numero4, soma;
	printf("\nDigite um numero: \n");
	scanf("%d", &numero1);
	printf("\nDigite um numero: \n");
	scanf("%d", &numero2);
	printf("\nDigite um numero: \n");
	scanf("%d", &numero3);
	printf("\nDigite um numero: \n");
	scanf("%d", &numero4);
	
	if ((numero1 > numero2) && (numero1 > numero3) && (numero1 > numero4)){
		soma = numero2 + numero3 + numero4;
		printf("\nA soma dos tres numeros menores eh: %d \n", soma);
	}
	else if ((numero2 > numero1) && (numero2 > numero3) && (numero2 > numero4)){
		soma = numero1 + numero3 + numero4;
		printf("\nA soma dos tres numeros menores eh: %d \n", soma);
	}
	else if ((numero3 > numero1) && (numero3 > numero2) && (numero3 > numero4)){
		soma = numero1 + numero2 + numero4;
		printf("\nA soma dos tres numeros menores eh: %d \n", soma);
	}
	else if ((numero4 > numero1) && (numero4 > numero2) && (numero4 > numero3)){
		soma = numero1 + numero2 + numero3;
		printf("\nA soma dos tres numeros menores eh: %d \n", soma);
	}
}
