#include <stdio.h>


main(){
	
	
	int number1, number2;
		printf("\n Digite um numero: \n");
			scanf("%d", &number1);
		printf("\n Digite outro numbero: \n");
			scanf("%d", &number2);
	
	if (number1 || number2 %2)
		{
		printf("\n YEAH!!!! Esses numeros sao multiplos de 2\n");
	
}

	else if ((number1 || number2 %4))

		{
		printf("\n YEAHHHH!!!! Esses numeros sao multiplos de 4 \n");
		}
	else 
		{
		printf("\n Desiste nao! Tente de novo!\n");
		}

}
