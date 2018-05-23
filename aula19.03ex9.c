//Fazer um programa para que o usuário digite um salário e o
//programa deverá calcular seu reajuste. Exibir mensagem com o valor
//do desconto.
//Salario <= 600 e sexo = ‘M’, aplicar desconto de 20%
//Salario <= 1200 e sexo = ‘F’, aplicar desconto de 20%
//Salario <= 2000 e sexo ‘M’, aplicar desconto de 25%
//Senão, desconto de 30% - ambos os sexos

#include <stdio.h>

main(){

		float salario=0, desconto20=0, desconto25=0, desconto30=0;
	char sexo;
		printf("\nDigite aqui o valor do seu salario\n");
	scanf("%f", &salario);
		printf("\n digite seu sexo: \n ");
	scanf("%c", &sexo);
	
	
	if (salario<=600 && sexo=='h') {
		desconto20 = salario * 0.2;
		printf("\n %f\n", desconto20);
}
	
	else if (salario<=1200 && sexo=='m'){
		desconto20 = salario * 0.2;
		printf("\n %f \n", desconto20);
	}
	
	
	else if (salario<=2000 && sexo=='h'){
		desconto25= salario * 0.25;
		printf("\n %f \n", desconto25);
	}
 
	else	desconto30 = salario * 0.30;{
		printf("\n %f", desconto30);
		}
	
	
	

	
}
