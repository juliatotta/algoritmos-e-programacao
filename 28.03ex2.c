/* Faça um programa para que o usuário digite uma palavra e exiba
quantos caracteres tem a palavra, depois concatene essa palavra
com a palavra “lindo” e exiba o conteúdo final da concatenação. */

#include <stdio.h>
#include <string.h>

main(){
	
	int tam;
	char palavra1[20], palavra2[10];
	
 	printf("\n Digite uma palavra: \n");
  	gets (palavra1);
	tam = strlen(palavra1);
	printf("\n A sua palavra tem %d caracteres \n", tam);
	strcpy(palavra2, "lindo");
	strcat (palavra1, palavra2);
    printf ("%s", palavra1);
}
