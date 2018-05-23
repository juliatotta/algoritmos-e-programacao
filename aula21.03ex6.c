#include <stdio.h>


main(){
	inicio:
	int number1, number2, number3;
		printf("\n Digite um numero: \n");
			scanf("%d", &number1);
		printf("\n Digite um numero: \n");
			scanf("%d", &number2);
		printf("\n Digite um numero: \n");
			scanf("%d", &number3);
			
	if ((number1=number2) && (number2=number3) && (number3==number1))
		{
		printf("\n Erro! O progama nao aceita numeros iguais. Tente novamente! \n");
	goto inicio;
		}
		
	else if ((number1!=number2) || (number2!=number3) || (number3!=number1))
		{
		printf("\n Yeahhh!\n");
		}

}
