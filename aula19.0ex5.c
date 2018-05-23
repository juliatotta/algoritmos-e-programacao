// Fazer um programa para que o usuário digite um número e o
//programa verifique se o número é múltiplo de 2 ou de 5 ou de 10.
//Exibir mensagem.


#include <stdio.h>

main(){
	
	int number = 0;
	printf("\n Digite um numero: \n");
	scanf("%d", &number);
	
	if ((number%2==0) || (number%5==0) || (number%10==0))
	printf("\n esse numero eh multiplo de 2 ou 5 ou 10 \n");
	
	else
	printf("\n esse numero nao eh multiplo de 2, 5 ou 10");
}
