//Fazer um programa para que o usuário digite três números e o
//programa deverá verificar qual é o número do meio. Exibir
//mensagem com o número. O programa não poderá aceitar valor zero
//para nenhum dos três números. Criticar, dar mensagem de erro e
//retornar para nova digitação daquele número errôneo.

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
