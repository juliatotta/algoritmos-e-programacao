//Fazer um programa para que o usuário digite um número e o
//programa verifique se o número é múltiplo de 3 e 7. Exibir
//mensagem.

#include <stdio.h>

main(){
	
	
	int number= 0;
	printf("\n Digite um numero: \n");
	scanf("%d", &number);
	
	if (number%3==0 && number%5==0)
	printf("\n esse numero eh multiplo de 3 e 5");
	
	else
	printf("\n esse numero nao eh multiplo de 3 e 5. \n");
}
