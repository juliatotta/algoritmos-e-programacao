/*  Fa�a um programa para que o usu�rio possa digitar um n�mero
inteiro. Se o n�mero for par, multiplicar o valor por 2, caso seja
�mpar, dividir por 2. Em ambos os caso exibir o resultado. O
programa n�o pode aceitar valor zero e nem negativo. Caso seja
digitado, mensagem de erro e retornar para nova digita��o. */

#include <stdio.h>
#include <string.h>


main(){
	incio:
	int numero;
	printf("\nDigite um numero inteiro: \n");
	scanf("%d", &numero);
	
	if (numero <= 0){
		printf("\nErro! Tente novamente \n");
		goto incio;
	}
	
	
    else if (numero % 2==0) {
	numero = numero * 2;
		printf("\nO resultado desse numero par eh: %d \n", numero);
	}
	
	else if (numero%1==0){
	numero= numero % 2;
		printf("\nO resultado desse numero impar eh: %d \n", numero);
	}
}
