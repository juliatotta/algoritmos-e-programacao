/* fazer um programa para que o usu�rio possa digitar uma letra.
Verificar se esta letra faz parte das vogais. Caso positivo, exibir
mensagem �Vogal Digitada Corretamente�. Caso contr�rio, exibir
mensagem �Letra Digitada n�o � uma Vogal�. */

#include <stdio.h>
#include <string.h>


main(){
	
	char letra;
	printf("\nDigite uma letra: \n ");
	scanf("%c", &letra);
	
	
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		printf("\nVogal digitada corretamente \n");
	}
	
	else 
	{
		printf("\nLetra digitada nao eh uma vogal \n");
	}
	
}
