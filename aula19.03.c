//Fazer um programa para que o usuário digite dois números e o
//programa verifique se os números são ou não iguais. Exibir
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
