/* Fazer um programa que informe os tr�s lados de um tri�ngulo e imprimir
o tipo do tri�ngulo para o usu�rio. Se os tr�s lados forem diferentes, o
tri�ngulo � escaleno, se os tr�s lados forem iguais o tri�ngulo � equil�tero
e se apenas dois lados forem iguais o tri�ngulo � is�sceles. N�o podem
conter valores zero e nem negativos. Caso ocorra, mensagem de erro e
retorna para nova digita��o daquele valor. */


#include <stdio.h>


main(){
	inicio:
	float lado1, lado2, lado3;
	
	printf("Vamos informar qual eh o tipo do seu triangulo. Para comecar, informe o valor do primeiro lado do seu triangulo: \n");
	scanf("%f", &lado1);
	printf("Agora o segundo: \n");
	scanf("%f", &lado2);
	printf("Por fim, o terceiro: \n");
	scanf("%f", &lado3);
	
	
	if((lado1 <= 0) || (lado2 <= 0) || (lado3 <= 0)){
		printf("Numeros negativos ou iguais a zero nao sao permitidos. Tente novamente: \n");
		goto inicio;
	}
	
	if((lado1 != lado2) && (lado2 != lado3) && (lado1 != lado3)){
		printf("\n Esse triangulo eh do tipo escanelo.");
	}
	
	else if((lado1 == lado2) && (lado2 == lado3) && (lado1 == lado3)){
		printf("\n Esse triangulo eh do tipo equilatero.");
	}
	
	else if((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){
		printf("\n Esse trinagulo eh do tipo isosceles.");
	}
}
