/*Fazer um programa para que o usu�rio informe tr�s palavras. As
palavras n�o podem ser repetidas. Caso aconte�a, mensagem de erro e
retorna para nova digita��o daquela informa��o. Ao final o programa
dever� concatenar as tr�s palavras e exibir para o usu�rio.
*/

#include <stdio.h>
#include <string.h>

main(){


char palavra1[90];
char palavra2[30];
char palavra3[30];



printf("Digite a primeira palavra: \n");
scanf("%s", palavra1);


p2:
printf("Digite a segunda palavra: \n");
scanf("%s", palavra2);

if(strcmp(palavra1, palavra2)== 0){
	printf("As palavras nao podem ser repetidas. Tente novamente: \n");
	goto p2;
}



p3:
printf("Digite a terceira palavra: \n");
scanf("%s", palavra3);

if((strcmp(palavra3, palavra1)==0) || (strcmp(palavra3, palavra2)==0)){
	printf("As palavras nao podem ser repetidas. Tente novamente: \n");
	goto p3;
}


strcat(palavra1, palavra2) && strcat(palavra1, palavra3);
printf("%s", palavra1);

}
