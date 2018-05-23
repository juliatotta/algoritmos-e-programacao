/*Fazer um programa para reajustar o valor do salário do funcionário. 
O salário será informado em tempo de execução. O programa deverá reajustar o salário informado com base nas premissas da tabela abaixo. 
O valor do salário não pode ser menor do que 1.000,00 e nem maior do 7.000,00. 
O Estado não pode ser diferente do que foi informado na tabela e nem o sexo. 
Caso algum erro aconteça, mensagem de erro e retorna para digitação daquela informação. 
 
Estado Sexo Percentual Reajuste Goias f 10 Minas f 14 Rio m 26 Acre f 39 Rondonia m 8 */

#include <stdio.h>
#include <string.h>



main(){
	
	inicio:
		
	char estado[10];
	char sexo[1];
	float salario, reajuste;
	

	
	inicio2:
	printf("Esse programa eh para reajustar seu salario. Primeiro passo: Digite o seu estado(GO, MG, RJ, AC, RO): \n");
	scanf("%s", estado);
	
	if((strcmp(estado,"GO")==0) || (strcmp(estado,"MG")==0) || (strcmp(estado,"RJ")==0) || (strcmp(estado,"AC")==0) || (strcmp(estado,"RO")==0)){
		printf("\n Ok! Proximo passo: \n");
	}
	else{
		printf("\nO programa so aceita os estados GO, MG, AC e RO (com capslook). Tente novamente: \n");
		goto inicio2;
		}
	
	
	inicio3:
	printf("\nAgora digite seu sexo ('f' ou 'm'): \n");
	scanf("%s", sexo);
	
	if((strcmp(sexo, "f") == 0) || (strcmp(sexo, "m")== 0)){
		printf("\n Ok! Proximo passo: \n");
	}
	
	else{
		printf("Sexo so pode ser 'f' ou 'm'. Tente novamente: \n");
		goto inicio3;
	}
	
	
	
	printf("\n Digite seu salario: \n");
	scanf("%f", &salario);
	
	if((salario <= 1000) || (salario >= 7000)){
		printf("\nSalario nao pode ser menor que 1.000 e nem maior que 7.000 . Tente novamente: \n");
		goto inicio;
	}
	
	
	if(strcmp(estado, "GO")==0 && strcmp(sexo, "f")==0){
		reajuste = salario + (salario * 0.1);
		printf("\n Reajuste do salario: %f", reajuste);
	}
	
	else if(strcmp(estado, "MG")==0 && strcmp(sexo, "f")==0){
		reajuste = salario + (salario * 0.14);
		printf("\n Reajuste do salario: %f", reajuste);
	}
	
	else if(strcmp(estado, "RJ")==0 && strcmp(sexo, "m")==0){
		reajuste = salario + (salario * 0.26);
		printf("\n Reajuste do salario: %f", reajuste);
	}
	
	else if(strcmp(estado, "AC")==0 && strcmp(sexo, "f")==0){
		reajuste = salario + (salario * 0.39);
		printf("\n Reajuste do salario: %f", reajuste);
	}
	
	
	
	else if(strcmp(estado, "RO")==0 && strcmp(sexo, "m")==0){
		reajuste = salario + (salario * 0.08);
		printf("\n Reajuste do salario: %f", reajuste);
	}
	
	
	
}
