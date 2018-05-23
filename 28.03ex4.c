/* Faça um programa para que o usuário possa digitar uma palavra.
Verifique se a palavra tem quantidade de caracteres par ou ímpar.
Exibir a quantidade de caractere. */

#include <stdio.h>
#include <string.h>

main(){
	
	char palavra[50];
	printf("\nDigite uma palavra: \n");
	gets(palavra);
 	
 if (strlen(palavra) % 2 == 0){
 	printf("\n Esse palavra cotem uma quantidade de cartacteres par! \n");
 }
 else{
 	printf("\n Essa palavra contem uma quantidade de caracteres impar!\n");
 }
}

