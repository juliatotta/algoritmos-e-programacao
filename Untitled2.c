// Faça um programa para que o usuário informe três números. O
//programa deverá calcular o produto dos dois números informados.
//Exibir o resultado em uma mensagem.
//Fórmula: n1 * n2

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

