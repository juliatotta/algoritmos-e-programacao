//Fa�a um programa para que o usu�rio informe um n�mero e
//fa�a o c�lculo da ter�a parte deste n�mero. Exibir os valores
//informados e o resultado em uma �nica mensagem.

#include <stdio.h>

main(){
	
	float number1, formula;
	printf("\n Digite um numero: \n");
	scanf("%f", &number1);
	formula = number1 / 3; 
	printf("\n O resultado do valor %f eh %f\n", number1, formula);
}
