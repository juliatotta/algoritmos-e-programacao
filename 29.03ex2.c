/*Fazer um programa para que o usuário possa digitar quatro palavras. 
O programa não poderá aceitar palavras com menos de três caracteres e com mais de 14 caracteres.
Ao final o programa deverá exibir quantas palavras possuem a mesma quantidade de caracteres. */

#include <stdio.h>
#include <string.h>


main(){
	
	char palavra1[80];
	char palavra2[20];
	char palavra3[20];
	char palavra4[20];
	int len;
	
	printf("Digite a primeira palavra: \n");
	gets(palavra1);
	printf("Digite a segunda palavra: \n");
	gets(palavra2);
	printf("Digite a terceira palavra: \n");
	gets(palavra3);
	printf("Digite a quarta palavra: \n");
	gets(palavra4);
	
	len = strlen(palavra1);
	len = strlen(palavra2);
	len = strlen(palavra3);
	len = strlen(palavra4);

	if((strlen(palavra1) >= 3 && strlen(palavra1) <= 14) && (strlen(palavra2) >= 3 && strlen(palavra2) <= 14) && (strlen(palavra3) >= 3 && strlen(palavra3) <= 14)
&& (strlen(palavra4) >= 3 && strlen(palavra4) <= 14)){
	printf("Aceito!");
	}
	
	else {
		
		printf("Nao aceito.");
	}
	
	if(strlen(palavra1) == strlen(palavra2)){
		printf("%s e %s", palavra1, palavra2);
	}
	else if(strlen(palavra2) == strlen(palavra3)){
		printf("%s e %s", palavra2, palavra3);
	}
	else if(strlen(palavra1) == strlen(palavra3)){
		printf("%s e %s", palavra1, palavra3);
	}
	else if(strlen(palavra3) == strlen(palavra4)){
		printf("%s e %s", palavra3, palavra4);
	}
	else if(strlen(palavra4) == strlen(palavra2)){
		printf("%s e %s", palavra4, palavra2);
	}
	else if(strlen(palavra1) == strlen(palavra4)){
		printf("%s e %s", palavra1, palavra4);
	}



}

