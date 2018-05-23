/* Fazer um programa para cálculo de conversão de valores para viagem ao exterior. 
O programa deverá converter para a moeda o valor em real informado pelo viajante conforme país escolhido na tabela. 
 */
 
#include <stdio.h>
#include <string.h>

main(){
	inicio:
	char pais[10];
	float conversao_de_valores, real, valor_da_moeda;
	printf("Esse programa vai converter o valor em real p/ a moeda do pais que voce deseja visitar. Primeiro, sem capslook, digite o nome do seu destino (russia, usa, paquistao, egito ou italia): \n");
	gets(pais);	
	printf("Agora o valor em real: \n");
	scanf("%f", &real);
	
	
	if(pais != "russia" && "usa" && "paquistao" && "egito" && "italia"){
		printf("Ocorreu um erro. Os paises validos sao: russia, usa, paquistao, egito e italia. Nao se esqueca de digitar sem capslook. Tente novamente: \n ");
		goto inicio;
	}
	

	if(strcmp(pais, "russia")==0){
		valor_da_moeda = 1.68;
	}
	else if(strcmp(pais, "usa")==0){
		valor_da_moeda = 3.27;
	}
	else if(strcmp(pais, "paquistao")==0){
		valor_da_moeda = 0.57;
	}
	else if(strcmp(pais, "egito")==0){
		valor_da_moeda = 1.25;
	}
	else if(strcmp(pais, "italia")==0){
		valor_da_moeda = 4.51;
	}
	
	conversao_de_valores =  real / valor_da_moeda;
	
	printf("A conversao desse valor para a moeda do pais %s eh: %f", pais, conversao_de_valores);
}
