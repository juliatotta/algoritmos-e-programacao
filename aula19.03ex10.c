 //Fazer um programa para que o usu�rio digite um nome, uma idade e um sexo �M� ou �F�. O programa dever� exibir mensagem de �Esta Aceito�
//caso a idade seja < 25 o sexo == �F�, caso contr�rio mensagem de �N�o Aceita�. 
 
 #include <stdio.h>
 
 main(){
 	
 		char nome[50], sexo;
 		int idade;
 			printf("\n Digite seu nome: \n");
 				scanf("%s", &nome);
 			printf("\n Digite sua idade: \n");
 				scanf("%d"), &idade;
 			printf("\n Com M ou F, digite seu sexo: \n");
 				scanf("%s", &sexo);
 				
 		if (idade<25 && sexo=='F')
		
 			printf("\n Esta aceito!\n");
			 
		else 

			printf("\n Nao aceito\n");	 
			 

 		
 	
 	
 }
