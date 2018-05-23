//Faça um programa para que o usuário informe dois números e o
//programa deverá executar a troca destes valores entre eles.
//Exemplo: o valor de n1 deverá ir para o n2 e o valor de n2 deverá ir
//para o n1. Exibir os valores invertidos em duas mensagens

#include <stdio.h>

main(){
	
	float number1, number2, outro;
	printf("\n Digite um numero: \n");
	scanf("%f", &number1);
	printf("\n Digite outro numero: \n");
	scanf("%f", &number2);
	outro = number1;
	number1 = number2;
	number2 = outro;
	printf("\n O valor do 1 = %f e o valor do 2 = %f \n", number1, outro);
}
