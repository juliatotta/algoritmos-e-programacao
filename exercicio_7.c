//Fa�a um programa para que o usu�rio informe o valor do d�lar,
//o valor da taxa de convers�o e o programa dever� converter o valor
//do d�lar informado em um valor em real. Exibir o valor do real
//obtido em uma mensagem.
//F�rmula: real = dolar * taxa;

#include <stdio.h>

main(){
	
	float valor_do_dolar, valor_taxa_de_conversao, valor_em_real;
	printf("\n Digite o valor do dolar: \n");
	scanf("%f", &valor_do_dolar);
	printf("\n Digite o valor da taxa de conversao: \n");
	scanf("%f", &valor_taxa_de_conversao);
	valor_em_real = valor_do_dolar * valor_taxa_de_conversao;
	printf("\n O valor do real eh; %f", valor_em_real)
}
