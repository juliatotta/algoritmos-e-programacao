//Fazer um programa para que o usuário digite três notas, o
//programa deverá calcular a média aritmética e exibir o statuas.
//Media >= 7, aprovado
//Media <3, reprovado
//Senão, prova final

#include <stdio.h>

main(){
	
	
	float nota1=0, nota2=0, nota3=0, media1=0;
	printf("\n Digite a primeira nota: \n");
	scanf("%d", &nota1);
	printf("\n Digite a segunda nota: \n");
	scanf("%d", &nota2);
	printf("\n Digite a terceira nota: \n");
	scanf("%d", &nota3);
	media1 = (nota1+nota2+nota3) /3;
	
	
	if (media1>=7){
		printf("\nAprovado!\n");
	}
	else{
		printf("\n Recuperacao\n");
	}
		

	if (media1<3)
		printf("\n Reprovado! \n");
	
	else 
		printf("\n Recuperacao\n");
}
