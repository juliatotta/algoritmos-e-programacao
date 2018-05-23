//Fazer um programa para que o usuário digite três números e o
//programa verifique se os números podem ser os lados de um
//triângulo. Exibir mensagem.

#include <stdio.h>

main(){
	
	int number1= 0, number2=0, number3=0;
	printf("\n Digite um numero: \n");
	scanf("%d", &number1);
	printf("\n Digite um numero: \n");
	scanf("%d", &number2);
	printf("\n Digite um numero: \n");
	scanf("%d", &number3);
	
	if ((number1<number2+number3) && (number2<number3+number1) && (number3<number2+number1))
	printf("\n Esses numeros numeros sao iguais, entao podem ser um triangulo \n");
	
	else
	printf("\n isso nao pode ser um triangulo\n");
}
