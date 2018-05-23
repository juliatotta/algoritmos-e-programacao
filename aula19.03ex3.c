// Fazer um programa para que o usuário digite um número e o
//programa verifique se o número é múltiplo de 5. Exibir mensagem.

#include <stdio.h>

main(){
	
	
	int number = 0;
	printf("\n Digite um numero: \n");
	scanf("%d", &number);
	
	if (number%5 ==0)
	printf("\n Esse numero eh multiplo por 5 \n");
	
	else 
	printf("\n Esse numero nao eh multiplo de 5 \n");
}
