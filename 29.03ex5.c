/*Fazer um programa para calcular a média de um aluno. 
O programa deverá receber o nome do aluno, sexo, nota 1 e nota 2. 
O nome não poderá ultrapassar 50 caracteres. O sexo não poderá ser diferente de ‘m’ ou ‘f’. 
As notas não poderão ser negativas e nem 
maiores que 10. 
Caso aconteça, mensagem de erro e retorna para digitação daquela informação. 
 
Media < 4 ? Reprovado 
Media >= 6 ? Aprovado 
Media >= 4 e < 6 ? Prova Final. 
O programa deverá permitir a digitação de uma terceira nota. 
Esta média deverá ser a terceira nota mais a media e dividir por 2. Verificar: Media < 6 ? Reprovado 
Media >= 6 ? Aprovado 
 */
 
 
 #include <stdio.h>
 #include <string.h>
 
 main(){
	inicio:
 	char nome[50];
 	char sexo;
 	float nota1, nota2, nota3, tamanho, media;
 	
 	
 	printf("Digite o seu nome: \n");
 	scanf("%s", nome);
 	tamanho = strlen(nome);
 	if (strlen(nome) > 50){
 		printf("\nNao eh possivel nomes com mais de 50 caracteres. Tente novamente: \n");
 		goto inicio;
	 };
	 
	 
 	printf("Digite seu sexo com 'f' ou 'm': ");
	 scanf(" %c", &sexo); 
 	inicio2: 
 	if((sexo == 'f') || (sexo == 'm')){
	}
	else {
		printf("Sexo soh pode ser 'f' ou 'm'. Tente novamente: \n");
		goto inicio2;

 }
	inicio3:
	printf("Digite sua primeira nota: \n");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota: \n");
	scanf("%f", &nota2);
	
	
  if((nota1 < 0) || (nota1 > 10) && (nota2 < 0) || (nota2 > 10)) {
  	printf("As notas na podem ser negativas ou maiores que 10. Tente novamente: \n");
  	goto inicio3;
  }
  
   media = (nota1 + nota2) / 2;
   
  if(media < 4 ){
  	printf("Reprovado. \n");
  	 printf("Media: %f", media);
  }
  
  else if(media >= 6){
  	printf("Aprovado! \n");
  	 printf("Media: %f", media);
  }
  
    else if((media >= 4) && (media < 6)){
  	printf("Prova final. \n");
  	printf("Digite sua terceira nota: \n");
	scanf("%f", &nota3);
	if((nota1 > nota2) && (nota2 < nota3)){
	media = (nota1 + nota3) /2;
	}
	else{
	media = (nota2 + nota3) /2;
	}
	if(media < 6){
		printf("Reprovado. \n");
	}
 	printf("Media: %f", media);
	
  }
  
 
}


 
