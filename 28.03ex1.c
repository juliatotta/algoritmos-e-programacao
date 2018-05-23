 //Faça um programa para calcular a distância e o consumo numa
//viagem. O usuário deverá informar a velocidade média, as horas e a
//cidade.
//Exibir o consumo gasto.
//Fórmulas:
//distancia = horas * velmedia;
//consumo = distancia / quilometro;
//Cidade Quilometro
//Rio 9
//Minas 7
//Espirito Santo 6
//São Paulo 12


#include <stdio.h> 
#include <string.h>
main(){
	
	
	char cidade[10];
	float velocidade_media, horas, distancia, consumo, quilometros;
	
			printf("\n Vamos calcular o consumo da sua viagem. Digite seu destino (RJ, MG, SP ou ES):  \n");
		scanf("%s", &cidade);
			printf("\n Otimo! Agora digite a velocidade media: \n");
		scanf("%f", &velocidade_media);
			printf("\n Agora as horas de duracao: \n ");
		scanf("%f", horas);
	
		
		
	    if (strcmp(cidade, "RJ") == 0){
			quilometros = 9;
		}
			
			
		else if (strcmp(cidade, "ES") == 0){
			quilometros = 6;
		}
			
		else if (strcmp(cidade, "MG") == 0){
			quilometros = 7;
		}
			
		else if (strcmp(cidade, "SP") == 0){
			quilometros = 12;
		}
			
		distancia =  horas * velocidade_media;
		
		consumo = distancia / quilometros;
		
			printf("\n O consumo eh de %d\n", consumo);
	
}
