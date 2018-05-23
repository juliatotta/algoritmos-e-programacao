//Faça um programa para que o usuário informe o valor do dólar,
//o valor da taxa de conversão e o programa deverá converter o valor
//do dólar informado em um valor em real. Exibir o valor do real
//obtido em uma mensagem.
//Fórmula: real = dolar * taxa;

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
