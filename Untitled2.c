// Fa�a um programa para que o usu�rio informe tr�s n�meros. O
//programa dever� calcular o produto dos dois n�meros informados.
//Exibir o resultado em uma mensagem.
//F�rmula: n1 * n2

#include <stdio.h>

main(){
	
	float number1, number2, number3, formula;
	printf("\n Digite um numero: \n");
	scanf("%f", &number1);
	printf("\n Digite um numero: \n");
	scanf("%f", &number2);
	printf("\n Digite um numero: \n");
	scanf("%f", &number3);
	formula = number1 * number2;
	printf("\n resultado eh %f \n", formula);
}

