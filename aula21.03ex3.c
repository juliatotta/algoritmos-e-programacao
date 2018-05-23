//Fazer um programa para que o usuário digite dois números. Fazer
//a média destes dois números. O programa deverá verificar se a média
//dos números está entre o intervalo de valores de 15 e 37. Exibir
//mensagem “Valor Válido” para caso o número esteja de acordo. Caso
//negativo, exibir mensagem “Número Inválido”. Os números digitados
//não podem ser negativos. Caso sejam, exibir mensagem de erro e
//retornar para nova digitação daquele número errôneo.


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

