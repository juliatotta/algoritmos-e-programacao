//Faça um programa para que o usuário informe um número e
//faça o cálculo da terça parte deste número. Exibir os valores
//informados e o resultado em uma única mensagem.

#include <stdio.h>

main(){
	
	float number1, formula;
	printf("\n Digite um numero: \n");
	scanf("%f", &number1);
	formula = number1 / 3; 
	printf("\n O resultado do valor %f eh %f\n", number1, formula);
}
