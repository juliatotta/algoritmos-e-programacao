//Fazer um programa para que o usu�rio digite dois n�meros e o
//programa verifique se os n�meros s�o ou n�o iguais. Exibir
//mensagem.

#include <stdio.h>

main()
{
	float number1= 0, number2= 0;
	printf("\n Digite um numero: \n");
	scanf("%f", &number1);
	printf("\n Digite outro numero: \n");
	scanf("%f", &number2);
	
		if(number1==number2)
		printf("\n Os dois numeros sao iguais \n");
		else
	printf("\n Esses numeros nao sao iguais \n");
	

}
