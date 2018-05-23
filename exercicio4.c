 //Faça um programa para que o usuário informe dois números. O
//programa deverá calcular a soma destes números e depois calcular
//a diferença entre eles. Exibir os resultados da soma e da subtração
//em uma única mensagem. Os valores informados deverão aparecer
//na mensagem.

#include <stdio.h>

main(){
	
	float number1, number2, soma, subtacao; 
	printf("\n Digite um numero: \n");
	scanf("%f", &number1);
	printf("\n Digite outro numero: \n");
	scanf("%f", &number2);
	soma = number1 + number2;
	subtacao = number1 - number2;
	prinft("\n O resutado da soma eh de %f, e o da subtracao de %f", soma, subtracao);
	
}
