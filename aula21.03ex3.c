//Fazer um programa para que o usu�rio digite dois n�meros. Fazer
//a m�dia destes dois n�meros. O programa dever� verificar se a m�dia
//dos n�meros est� entre o intervalo de valores de 15 e 37. Exibir
//mensagem �Valor V�lido� para caso o n�mero esteja de acordo. Caso
//negativo, exibir mensagem �N�mero Inv�lido�. Os n�meros digitados
//n�o podem ser negativos. Caso sejam, exibir mensagem de erro e
//retornar para nova digita��o daquele n�mero err�neo.


#include <stdio.h>

main(){
	
	
	inicio:
	int number1, number2, media;
		printf("\n Digite um numero: \n");
			scanf("%d", &number1);
		printf("\n Digite outro numero: \n");
			scanf("%d", &number2);
			
	media = number1 + number2 % 2;
			
	if ((number1 < 0) || (number2 < 0))
		{printf("\n Valor Invalido! Os numeros nao podem ser negativos.\n");
			goto inicio; 
	}
	if ((media >= 15) && (media <= 37))
		{printf("\n Valor Valido! \n");	
		
	}
	else
		{
		printf("\n invalido");
	
	}
	
	
}

