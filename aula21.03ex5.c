#include <stdio.h>


main(){
	
	incio:
	int number;
		printf("\n Digite um numero: \n");
			scanf("%d", &number);
			
			
	if ((number <= 0) || (number > 100))
		{
		printf("\n Error! Tente novamente!\n");
	goto incio;
	}
	
	else if ((number % 2) || (number % 5) || (number % 10))
		{
		printf("\n Yeahhhhh!\n");
		}

	else
		{
		printf("\n Error! \n");
		}
}


