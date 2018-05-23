/* Fazer uma programa para que duas palavras sejam digitas.
Comparar se ambas são iguais. Caso positivo, exibir mensagem
“Nome Idêntico. Caso contrário, exibir mensagem “Nomes
Distintos”. */

#include <stdio.h>
#include <string.h>

main(){
	
	char palavra1[30];
	char palavra2[30];
	printf("\nDigite uma palavra: \n");
	gets(palavra1);
	printf("\nDigite outra palavra: \n");
	gets(palavra2);
	
	if(strcmp(palavra1,palavra2)==0){
		printf("\nNome identico \n");
	}
	else {
		printf("\nNomes distintos\n");
	}
}
