/*  Fa�a um programa para que o usu�rio digite uma palavra, depois
digite uma segunda palavra e verifique qual das palavras � a menor.
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
