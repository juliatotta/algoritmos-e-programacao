//Fazer um programa para que o usu�rio digite um n�mero e o
//programa verifique se os n�meros est�o entre o intervalo de valores
//de 10 e 20. Exibir mensagem.

#include <stdio.h>

main()
{ 

	int number = 0;
	printf("\n Digite um numero: \n");
	scanf("%d", &number);
	
	if (number>= 10 && number <= 20)
	printf("\n Esse numero esta entre 10 e 20 \n");
	
	else
	printf("\n Esse numero nao esta entre 10 e 20 \n");	
	
	

}
