/*Fa�a um programa para que o usu�rio digite tr�s palavras,
concatene as tr�s e exiba a informa��o concatenada. */


#include <stdio.h>
#include <string.h>


main(){
	
	char resultado[30];
	char palavra1[10];
	char palavra2[10];
	char palavra3[10];
	
	
	printf("\n Digite a primeira palavra: \n");
	gets(palavra1);
	printf("\n Digite a segunda palavra: \n");
	gets(palavra2);
	printf("\n Digite a terceira palavra: \n");
	gets(palavra3); 
	
	strcat(resultado, palavra1);
	strcat(resultado, palavra2);
	strcat(resultado, palavra3);
	printf("%s", resultado);
	




	}
