//Fazer um programa para que o usu�rio digite tr�s n�meros e o
//programa dever� verificar qual � o n�mero do meio. Exibir
//mensagem com o n�mero. O programa n�o poder� aceitar valor zero
//para nenhum dos tr�s n�meros. Criticar, dar mensagem de erro e
//retornar para nova digita��o daquele n�mero err�neo.

#include <stdio.h>


main(){
	
	inicio:
	int number1=0, number2=0, number3=0;
		printf("\nDigite um numero: \n");
			scanf("%d", &number1);
		printf("\nDigite um numero: \n");
			scanf("%d", &number2);
		printf("\nDigite um numero: \n");
			scanf("%d", &number3);
	
	if((number1=0) || (number2=0) || (number3=0))
	{
		printf("\n O programa nao pode aceitar o valor 0\n");
		goto inicio;		
	}
	else if((number1 > number2) &&  (number2 > number3))
	{
		printf("\n O numero do meio eh o %d\n", number2);
	}
	else if ((number2 > number1) &&  (number1 > number3))
	{
		printf("\n O numero do meio eh o %d\n", number1);
	}
	
	else if((number1 > number3) && (number3 > number2))
	{
		printf("\n O numero do meio eh o %d\n", number3);
}
	
}
