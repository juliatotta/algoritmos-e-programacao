/*Fazer um programa para que o usuário digite três palavras.
O programa não pode permitir a entrada de palavras com a mesma quantidade de caractere. 
Caso ocorro, Mensagem de erro e retornar para a digitação daquela palavra. 
Ao final o programa deverá exibir na tela o somatório dos caracteres das três palavras digitadas. */

#include <stdio.h>
#include <string.h> 

main(){
	
	inicio:
	char palavra1[60];
	char palavra2[30];
	char palavra3[30];
	int len;
	
	printf("Digite a primeira palavra: \n");
	gets(palavra1);
	printf("Digite a segunda palavra: \n");
	gets(palavra2);
	printf("Digite a terceira palavra: \n");
	gets(palavra3);
	
	len = strlen(palavra1);
	len = strlen(palavra2);
	len = strlen(palavra3);
	
	if((strlen(palavra1) == strlen(palavra2)) || (strlen(palavra2) == strlen(palavra3)) || (strlen(palavra1) == strlen(palavra3))){
		printf("O programa nao permite palavras com a mesma quantidade de caracteres. Tente novamente: \n");
		goto inicio;
	}

	
	len = strlen(palavra1) + strlen(palavra2) + strlen(palavra3);
	printf("Quantidade de caracteres%d", len);


}

