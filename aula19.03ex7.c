//Fazer um programa para que o usu�rio digite tr�s n�meros e o
//programa verifique se os n�meros s�o iguais. Exibir mensagem.

#include <stdio.h>

main(){
	
	int number1=0, number2=0, number3=0;
	printf("\n Digite um numero: \n");
	scanf("%d", &number1);
	printf("\n Digite um numero: \n");
	scanf("%d", &number2);
	printf("\n Digite um numero: \n");
	scanf("%d", &number3);
	
	if((number1==number2) && (number2==number3) && (number1==number3))
		printf("\n Esses numeros sao iguais! \n");
	
	else
		printf("\n Esses numeros nao sao iguais \n");
}
