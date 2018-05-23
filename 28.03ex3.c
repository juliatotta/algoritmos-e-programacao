/*  Faça um programa para que o usuário digite uma palavra, depois
digite uma segunda palavra e verifique qual das palavras é a menor.
Exiba a menor palavra. */

#include <stdio.h>
#include <string.h>


main(){
	char nome1[50], nome2[50];
	printf("\nDigite uma palavra: \n");
	gets(nome1);
	printf("\nDigite outra palavra: \n");
	gets(nome2);
	
	if (strlen(nome1) > strlen(nome2)) {
		printf("\n A menor palavra eh %s \n", nome2);
	}
	else{
		printf("\n A menor palavra eh %s \n", nome1);
	}
}
