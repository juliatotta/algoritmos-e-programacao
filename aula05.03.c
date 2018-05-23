//Faça um programa para que o usuário informe três números. O
//programa deverá calcular a media aritmética destes três números e
//exibir o resultado em uma mensagem.

#include <stdio.h>

main(){
	
	float number1 , number2, number3, media; 
	printf("\n Digite um numero: \n");
	scanf("%f", &number1);
	printf("\n Digite um numero: \n");
	scanf("%f", &number2);
	printf("\n Digite um numero: \n");
	scanf("%f", &number3);
	media = (number1 + number2 + number3)/3;
	printf("A media aritmetica desses tres numeros eh %f ", media);	
}
