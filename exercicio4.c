 //Fa�a um programa para que o usu�rio informe dois n�meros. O
//programa dever� calcular a soma destes n�meros e depois calcular
//a diferen�a entre eles. Exibir os resultados da soma e da subtra��o
//em uma �nica mensagem. Os valores informados dever�o aparecer
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
