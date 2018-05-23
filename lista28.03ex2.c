/* Fazer um programa que informe os três lados de um triângulo e imprimir
o tipo do triângulo para o usuário. Se os três lados forem diferentes, o
triângulo é escaleno, se os três lados forem iguais o triângulo é equilátero
e se apenas dois lados forem iguais o triângulo é isósceles. Não podem
conter valores zero e nem negativos. Caso ocorra, mensagem de erro e
retorna para nova digitação daquele valor. */


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
